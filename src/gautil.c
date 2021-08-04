#ifdef __cplusplus
extern "C" {
#endif

/*
	Conversion from Pixel Coordinates to OpenGL Coordinates is actually quite interesting.
	To do it, a Pixel camera is needed to be able to convert the Pixel Coordinates which is done in the form of width and height.
*/
float[] pixel_coord_to_gl_coord(int x, int y, int camWidth, int camHeight) {
	int glX = (((x - 0) * (1 - -1)) / (camWidth - 0)) + -1;
	int glY = (((y - 0) * (1 - -1)) / (camHeight - 0)) + -1;
	int output[2] = {glX, glY};
	return output;
}

#ifdef __cplusplus
}
#endif