#ifndef ORBITSEL_PNG_H
#define ORBITSEL_PNG_H

#include <wx/mstream.h>
#include <wx/image.h>
#include <wx/bitmap.h>

static const unsigned char orbitsel_png[] = 
{
	0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 
	0x00, 0x0D, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x17, 
	0x00, 0x00, 0x00, 0x17, 0x08, 0x02, 0x00, 0x00, 0x00, 0x6F, 
	0x48, 0x43, 0xF7, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 0x47, 
	0x42, 0x00, 0xAE, 0xCE, 0x1C, 0xE9, 0x00, 0x00, 0x00, 0x04, 
	0x67, 0x41, 0x4D, 0x41, 0x00, 0x00, 0xB1, 0x8F, 0x0B, 0xFC, 
	0x61, 0x05, 0x00, 0x00, 0x00, 0x20, 0x63, 0x48, 0x52, 0x4D, 
	0x00, 0x00, 0x7A, 0x26, 0x00, 0x00, 0x80, 0x84, 0x00, 0x00, 
	0xFA, 0x00, 0x00, 0x00, 0x80, 0xE8, 0x00, 0x00, 0x75, 0x30, 
	0x00, 0x00, 0xEA, 0x60, 0x00, 0x00, 0x3A, 0x98, 0x00, 0x00, 
	0x17, 0x70, 0x9C, 0xBA, 0x51, 0x3C, 0x00, 0x00, 0x00, 0x1A, 
	0x74, 0x45, 0x58, 0x74, 0x53, 0x6F, 0x66, 0x74, 0x77, 0x61, 
	0x72, 0x65, 0x00, 0x50, 0x61, 0x69, 0x6E, 0x74, 0x2E, 0x4E, 
	0x45, 0x54, 0x20, 0x76, 0x33, 0x2E, 0x35, 0x2E, 0x31, 0x30, 
	0x30, 0xF4, 0x72, 0xA1, 0x00, 0x00, 0x00, 0xB2, 0x49, 0x44, 
	0x41, 0x54, 0x38, 0x4F, 0xAD, 0x95, 0x5B, 0x12, 0x80, 0x20, 
	0x08, 0x45, 0x6D, 0x67, 0x2E, 0xDD, 0x9D, 0x99, 0x0E, 0x84, 
	0x0A, 0xF2, 0xC8, 0x91, 0x69, 0xFA, 0x48, 0x3C, 0x5E, 0x14, 
	0x6F, 0x4F, 0x29, 0x25, 0x29, 0x91, 0x73, 0x9E, 0x47, 0x8C, 
	0xCC, 0xD4, 0xC6, 0x58, 0xD0, 0xCC, 0xE0, 0xF7, 0x4E, 0x97, 
	0xA9, 0x92, 0xEB, 0xE6, 0x0C, 0x0A, 0x48, 0x70, 0x11, 0x90, 
	0xC0, 0x92, 0x17, 0x4A, 0x10, 0x41, 0x20, 0xCA, 0x47, 0x4A, 
	0x5C, 0xC5, 0xBC, 0x12, 0xCD, 0xEA, 0x94, 0x33, 0xC4, 0xAC, 
	0xC8, 0xA7, 0xD4, 0x5A, 0x8D, 0x4A, 0x41, 0x81, 0x43, 0x69, 
	0x88, 0x94, 0xDA, 0x4B, 0x05, 0x21, 0xC5, 0x28, 0x07, 0x10, 
	0xF0, 0xD8, 0x20, 0xEB, 0x74, 0x2F, 0x50, 0x26, 0x44, 0x5B, 
	0xC9, 0x92, 0x83, 0xBD, 0xBE, 0xDD, 0xBC, 0x8F, 0x82, 0x08, 
	0xA3, 0x28, 0x97, 0x32, 0x10, 0x0E, 0x45, 0xEB, 0x97, 0x0E, 
	0x10, 0x21, 0x55, 0x5B, 0x27, 0x1D, 0xEF, 0x43, 0x95, 0x12, 
	0x47, 0x50, 0x1D, 0xFC, 0x1E, 0x1D, 0x20, 0x16, 0x7F, 0xF9, 
	0xE5, 0x0C, 0x6C, 0x37, 0x6F, 0xFB, 0x8B, 0x74, 0x0D, 0xED, 
	0x12, 0xCA, 0xAA, 0x37, 0xE6, 0x76, 0xC1, 0x77, 0x99, 0x09, 
	0xB1, 0x7F, 0x80, 0xA6, 0xEE, 0x05, 0x78, 0x36, 0xD7, 0x63, 
	0x4A, 0x13, 0x03, 0xD2, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 
	0x4E, 0x44, 0xAE, 0x42, 0x60, 0x82, 
};

wxBitmap& orbitsel_png_to_wx_bitmap()
{
	static wxMemoryInputStream memIStream( orbitsel_png, sizeof( orbitsel_png ) );
	static wxImage image( memIStream, wxBITMAP_TYPE_PNG );
	static wxBitmap bmp( image );
	return bmp;
};


#endif //ORBITSEL_PNG_H