static const uint8_t fs_debugdraw_fill_glsl[104] =
{
	0x46, 0x53, 0x48, 0x05, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x08, 0x75, 0x5f, 0x70, 0x61, 0x72, // FSH........u_par
	0x61, 0x6d, 0x73, 0x02, 0x04, 0x00, 0x00, 0x04, 0x00, 0x4a, 0x00, 0x00, 0x00, 0x75, 0x6e, 0x69, // ams......J...uni
	0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, // form vec4 u_para
	0x6d, 0x73, 0x5b, 0x34, 0x5d, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, // ms[4];.void main
	0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, //  ().{.  gl_FragC
	0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x5b, // olor = u_params[
	0x33, 0x5d, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                                 // 3];.}...
};
static const uint8_t fs_debugdraw_fill_spv[2142] =
{
	0x46, 0x53, 0x48, 0x05, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x08, 0x75, 0x5f, 0x70, 0x61, 0x72, // FSH........u_par
	0x61, 0x6d, 0x73, 0x12, 0x04, 0x00, 0x00, 0x04, 0x00, 0x40, 0x08, 0x00, 0x00, 0x03, 0x02, 0x23, // ams......@.....#
	0x07, 0x00, 0x00, 0x01, 0x00, 0x06, 0x00, 0x08, 0x00, 0x2e, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, // ..........a.....
	0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, 0x34, 0x35, 0x30, 0x00, 0x00, 0x00, // .GLSL.std.450...
	0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x06, // ................
	0x00, 0x04, 0x00, 0x00, 0x00, 0x1f, 0x16, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, // .........main...
	0x00, 0xd1, 0x0d, 0x00, 0x00, 0x10, 0x00, 0x03, 0x00, 0x1f, 0x16, 0x00, 0x00, 0x07, 0x00, 0x00, // ................
	0x00, 0x03, 0x00, 0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, 0x00, 0x04, // ................
	0x00, 0x1f, 0x16, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x06, // .....main.......
	0x00, 0x35, 0x13, 0x00, 0x00, 0x76, 0x65, 0x63, 0x34, 0x5f, 0x73, 0x70, 0x6c, 0x61, 0x74, 0x28, // .5...vec4_splat(
	0x66, 0x31, 0x3b, 0x00, 0x00, 0x05, 0x00, 0x03, 0x00, 0xdd, 0x0e, 0x00, 0x00, 0x5f, 0x78, 0x00, // f1;.........._x.
	0x00, 0x05, 0x00, 0x05, 0x00, 0x4d, 0x0f, 0x00, 0x00, 0x40, 0x6d, 0x61, 0x69, 0x6e, 0x28, 0x76, // .....M...@main(v
	0x66, 0x34, 0x3b, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0x2c, 0x41, 0x00, 0x00, 0x67, 0x6c, 0x5f, // f4;......,A..gl_
	0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5f, 0x30, 0x5f, 0x00, 0x00, 0x05, 0x00, 0x06, // FragData_0_.....
	0x00, 0xa0, 0x11, 0x00, 0x00, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x56, 0x6f, 0x69, 0x64, 0x46, 0x72, // .....bgfx_VoidFr
	0x61, 0x67, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x9d, 0x5e, 0x00, 0x00, 0x70, 0x61, 0x72, // ag........^..par
	0x61, 0x6d, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0xd2, 0x01, 0x00, 0x00, 0x24, 0x47, 0x6c, // am...........$Gl
	0x6f, 0x62, 0x61, 0x6c, 0x00, 0x06, 0x00, 0x06, 0x00, 0xd2, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // obal............
	0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x52, 0x65, 0x63, 0x74, 0x00, 0x00, 0x06, 0x00, 0x06, // .u_viewRect.....
	0x00, 0xd2, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x54, // .........u_viewT
	0x65, 0x78, 0x65, 0x6c, 0x00, 0x06, 0x00, 0x05, 0x00, 0xd2, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, // exel............
	0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0xd2, 0x01, 0x00, // .u_view.........
	0x00, 0x03, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, 0x65, 0x77, 0x00, 0x00, // .....u_invView..
	0x00, 0x06, 0x00, 0x05, 0x00, 0xd2, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x70, // .............u_p
	0x72, 0x6f, 0x6a, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0xd2, 0x01, 0x00, 0x00, 0x05, 0x00, 0x00, // roj.............
	0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x00, 0x06, 0x00, 0x06, // .u_invProj......
	0x00, 0xd2, 0x01, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, // .........u_viewP
	0x72, 0x6f, 0x6a, 0x00, 0x00, 0x06, 0x00, 0x07, 0x00, 0xd2, 0x01, 0x00, 0x00, 0x07, 0x00, 0x00, // roj.............
	0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x00, // .u_invViewProj..
	0x00, 0x06, 0x00, 0x05, 0x00, 0xd2, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, // .............u_m
	0x6f, 0x64, 0x65, 0x6c, 0x00, 0x06, 0x00, 0x06, 0x00, 0xd2, 0x01, 0x00, 0x00, 0x09, 0x00, 0x00, // odel............
	0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x00, 0x06, 0x00, 0x07, // .u_modelView....
	0x00, 0xd2, 0x01, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, // .........u_model
	0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x06, 0x00, 0x06, 0x00, 0xd2, 0x01, 0x00, // ViewProj........
	0x00, 0x0b, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x61, 0x6c, 0x70, 0x68, 0x61, 0x52, 0x65, 0x66, 0x34, // .....u_alphaRef4
	0x00, 0x06, 0x00, 0x06, 0x00, 0xd2, 0x01, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x70, // .............u_p
	0x61, 0x72, 0x61, 0x6d, 0x73, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x03, 0x00, 0x42, 0x13, 0x00, // arams........B..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0x3d, 0x51, 0x00, 0x00, 0x67, 0x6c, 0x5f, // .........=Q..gl_
	0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5f, 0x30, 0x5f, 0x00, 0x00, 0x05, 0x00, 0x04, // FragData_0_.....
	0x00, 0x9a, 0x16, 0x00, 0x00, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x00, 0x00, 0x00, 0x05, 0x00, 0x06, // .....param......
	0x00, 0xd1, 0x0d, 0x00, 0x00, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, // .....gl_FragData
	0x5f, 0x30, 0x5f, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x7d, 0x01, 0x00, 0x00, 0x06, 0x00, 0x00, // _0_..G...}......
	0x00, 0x40, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xb2, 0x04, 0x00, 0x00, 0x06, 0x00, 0x00, // .@...G..........
	0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0xd2, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // .....H..........
	0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0xd2, 0x01, 0x00, // .#.......H......
	0x00, 0x01, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, // .....#.......H..
	0x00, 0xd2, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, // .............H..
	0x00, 0xd2, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, // .........#... ..
	0x00, 0x48, 0x00, 0x05, 0x00, 0xd2, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, // .H..............
	0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0xd2, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, // .....H..........
	0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0xd2, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, // .....H..........
	0x00, 0x23, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0xd2, 0x01, 0x00, // .#...`...H......
	0x00, 0x03, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, // .............H..
	0x00, 0xd2, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, // .............H..
	0x00, 0xd2, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, // .........#......
	0x00, 0x48, 0x00, 0x05, 0x00, 0xd2, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, // .H..............
	0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0xd2, 0x01, 0x00, 0x00, 0x05, 0x00, 0x00, // .....H..........
	0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0xd2, 0x01, 0x00, 0x00, 0x05, 0x00, 0x00, // .....H..........
	0x00, 0x23, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0xd2, 0x01, 0x00, // .#.......H......
	0x00, 0x05, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, // .............H..
	0x00, 0xd2, 0x01, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, // .............H..
	0x00, 0xd2, 0x01, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, // .........#... ..
	0x00, 0x48, 0x00, 0x05, 0x00, 0xd2, 0x01, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, // .H..............
	0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0xd2, 0x01, 0x00, 0x00, 0x07, 0x00, 0x00, // .....H..........
	0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0xd2, 0x01, 0x00, 0x00, 0x07, 0x00, 0x00, // .....H..........
	0x00, 0x23, 0x00, 0x00, 0x00, 0x60, 0x01, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0xd2, 0x01, 0x00, // .#...`...H......
	0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, // .............H..
	0x00, 0xd2, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, // .............H..
	0x00, 0xd2, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, 0x01, 0x00, // .........#......
	0x00, 0x48, 0x00, 0x05, 0x00, 0xd2, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, // .H..............
	0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0xd2, 0x01, 0x00, 0x00, 0x09, 0x00, 0x00, // .....H..........
	0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0xd2, 0x01, 0x00, 0x00, 0x09, 0x00, 0x00, // .....H..........
	0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, 0x09, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0xd2, 0x01, 0x00, // .#.......H......
	0x00, 0x09, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, // .............H..
	0x00, 0xd2, 0x01, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, // .............H..
	0x00, 0xd2, 0x01, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xe0, 0x09, 0x00, // .........#......
	0x00, 0x48, 0x00, 0x05, 0x00, 0xd2, 0x01, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, // .H..............
	0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0xd2, 0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, // .....H..........
	0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x0a, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0xd2, 0x01, 0x00, // .#... ...H......
	0x00, 0x0c, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x30, 0x0a, 0x00, 0x00, 0x47, 0x00, 0x03, // .....#...0...G..
	0x00, 0xd2, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x42, 0x13, 0x00, // .........G...B..
	0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xd1, 0x0d, 0x00, // .".......G......
	0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x02, 0x00, 0x08, 0x00, 0x00, // ................
	0x00, 0x21, 0x00, 0x03, 0x00, 0x02, 0x05, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x16, 0x00, 0x03, // .!..............
	0x00, 0x0d, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x8a, 0x02, 0x00, // ..... ... ......
	0x00, 0x07, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, // ................
	0x00, 0x0d, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x21, 0x00, 0x04, 0x00, 0xef, 0x00, 0x00, // .........!......
	0x00, 0x1d, 0x00, 0x00, 0x00, 0x8a, 0x02, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x9a, 0x02, 0x00, // ......... ......
	0x00, 0x07, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x21, 0x00, 0x04, 0x00, 0xf5, 0x00, 0x00, // .........!......
	0x00, 0x08, 0x00, 0x00, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, // .........+......
	0x00, 0x0c, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x04, 0x00, 0x65, 0x00, 0x00, // .............e..
	0x00, 0x1d, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, // ................
	0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, // . .......+......
	0x00, 0x6a, 0x0a, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x04, 0x00, 0x7d, 0x01, 0x00, // .j... .......}..
	0x00, 0x65, 0x00, 0x00, 0x00, 0x6a, 0x0a, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, // .e...j...+......
	0x00, 0x16, 0x0a, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x04, 0x00, 0xb2, 0x04, 0x00, // ................
	0x00, 0x1d, 0x00, 0x00, 0x00, 0x16, 0x0a, 0x00, 0x00, 0x1e, 0x00, 0x0f, 0x00, 0xd2, 0x01, 0x00, // ................
	0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, // .........e...e..
	0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, // .e...e...e...e..
	0x00, 0x7d, 0x01, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, // .}...e...e......
	0x00, 0xb2, 0x04, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x4f, 0x04, 0x00, 0x00, 0x02, 0x00, 0x00, // ..... ...O......
	0x00, 0xd2, 0x01, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x4f, 0x04, 0x00, 0x00, 0x42, 0x13, 0x00, // .....;...O...B..
	0x00, 0x02, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, // ............. ..
	0x00, 0x01, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x2f, 0x0a, 0x00, // .....+......./..
	0x00, 0x0c, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x14, 0x0a, 0x00, // .....+..........
	0x00, 0x03, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x9b, 0x02, 0x00, 0x00, 0x02, 0x00, 0x00, // ..... ..........
	0x00, 0x1d, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x9c, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, // ..... ..........
	0x00, 0x1d, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x9c, 0x02, 0x00, 0x00, 0xd1, 0x0d, 0x00, // .....;..........
	0x00, 0x03, 0x00, 0x00, 0x00, 0x36, 0x00, 0x05, 0x00, 0x08, 0x00, 0x00, 0x00, 0x1f, 0x16, 0x00, // .....6..........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x2d, 0x61, 0x00, // .............-a.
	0x00, 0x3b, 0x00, 0x04, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x9a, 0x16, 0x00, 0x00, 0x07, 0x00, 0x00, // .;..............
	0x00, 0x39, 0x00, 0x05, 0x00, 0x08, 0x00, 0x00, 0x00, 0xe7, 0x49, 0x00, 0x00, 0x4d, 0x0f, 0x00, // .9........I..M..
	0x00, 0x9a, 0x16, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x3d, 0x51, 0x00, // .....=.......=Q.
	0x00, 0x9a, 0x16, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0xd1, 0x0d, 0x00, 0x00, 0x3d, 0x51, 0x00, // .....>.......=Q.
	0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, 0x01, 0x00, 0x36, 0x00, 0x05, 0x00, 0x1d, 0x00, 0x00, // .....8...6......
	0x00, 0x35, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xef, 0x00, 0x00, 0x00, 0x37, 0x00, 0x03, // .5...........7..
	0x00, 0x8a, 0x02, 0x00, 0x00, 0xdd, 0x0e, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x88, 0x2e, 0x00, // ................
	0x00, 0x3d, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x64, 0x57, 0x00, 0x00, 0xdd, 0x0e, 0x00, // .=.......dW.....
	0x00, 0x3d, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0xa9, 0x4e, 0x00, 0x00, 0xdd, 0x0e, 0x00, // .=........N.....
	0x00, 0x3d, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x49, 0x39, 0x00, 0x00, 0xdd, 0x0e, 0x00, // .=.......I9.....
	0x00, 0x3d, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x5c, 0x39, 0x00, 0x00, 0xdd, 0x0e, 0x00, // .=........9.....
	0x00, 0x50, 0x00, 0x07, 0x00, 0x1d, 0x00, 0x00, 0x00, 0xb0, 0x2a, 0x00, 0x00, 0x64, 0x57, 0x00, // .P........*..dW.
	0x00, 0xa9, 0x4e, 0x00, 0x00, 0x49, 0x39, 0x00, 0x00, 0x5c, 0x39, 0x00, 0x00, 0xfe, 0x00, 0x02, // ..N..I9...9.....
	0x00, 0xb0, 0x2a, 0x00, 0x00, 0x38, 0x00, 0x01, 0x00, 0x36, 0x00, 0x05, 0x00, 0x08, 0x00, 0x00, // ..*..8...6......
	0x00, 0x4d, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf5, 0x00, 0x00, 0x00, 0x37, 0x00, 0x03, // .M...........7..
	0x00, 0x9a, 0x02, 0x00, 0x00, 0x2c, 0x41, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x31, 0x27, 0x00, // .....,A......1'.
	0x00, 0x3b, 0x00, 0x04, 0x00, 0x8a, 0x02, 0x00, 0x00, 0x9d, 0x5e, 0x00, 0x00, 0x07, 0x00, 0x00, // .;........^.....
	0x00, 0x3e, 0x00, 0x03, 0x00, 0x9d, 0x5e, 0x00, 0x00, 0x0c, 0x0a, 0x00, 0x00, 0x39, 0x00, 0x05, // .>....^......9..
	0x00, 0x1d, 0x00, 0x00, 0x00, 0xa0, 0x11, 0x00, 0x00, 0x35, 0x13, 0x00, 0x00, 0x9d, 0x5e, 0x00, // .........5....^.
	0x00, 0x41, 0x00, 0x06, 0x00, 0x9b, 0x02, 0x00, 0x00, 0x0a, 0x5a, 0x00, 0x00, 0x42, 0x13, 0x00, // .A........Z..B..
	0x00, 0x2f, 0x0a, 0x00, 0x00, 0x14, 0x0a, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, // ./.......=......
	0x00, 0x6b, 0x2e, 0x00, 0x00, 0x0a, 0x5a, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x2c, 0x41, 0x00, // .k....Z..>...,A.
	0x00, 0x6b, 0x2e, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, 0x01, 0x00, 0x00,             // .k.......8....
};
static const uint8_t fs_debugdraw_fill_dx9[182] =
{
	0x46, 0x53, 0x48, 0x05, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x08, 0x75, 0x5f, 0x70, 0x61, 0x72, // FSH........u_par
	0x61, 0x6d, 0x73, 0x12, 0x04, 0x00, 0x00, 0x04, 0x00, 0x98, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, // ams.............
	0xff, 0xfe, 0xff, 0x20, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, 0x00, 0x00, 0x53, 0x00, 0x00, // ... .CTAB....S..
	0x00, 0x00, 0x03, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x91, 0x00, // ................
	0x00, 0x4c, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, // .L...0..........
	0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, // .<.......u_param
	0x73, 0x00, 0xab, 0xab, 0xab, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, // s...............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, // .....ps_3_0.Micr
	0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, // osoft (R) HLSL S
	0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x31, // hader Compiler 1
	0x30, 0x2e, 0x31, 0x00, 0xab, 0x01, 0x00, 0x00, 0x02, 0x00, 0x08, 0x0f, 0x80, 0x03, 0x00, 0xe4, // 0.1.............
	0xa0, 0xff, 0xff, 0x00, 0x00, 0x00,                                                             // ......
};
static const uint8_t fs_debugdraw_fill_dx11[253] =
{
	0x46, 0x53, 0x48, 0x05, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x08, 0x75, 0x5f, 0x70, 0x61, 0x72, // FSH........u_par
	0x61, 0x6d, 0x73, 0x12, 0x04, 0x00, 0x00, 0x04, 0x00, 0xdc, 0x00, 0x00, 0x00, 0x44, 0x58, 0x42, // ams..........DXB
	0x43, 0xda, 0xfb, 0x8d, 0xd4, 0xad, 0x58, 0xef, 0x92, 0x13, 0x90, 0x07, 0xb7, 0x79, 0x4c, 0x38, // C.....X......yL8
	0x95, 0x01, 0x00, 0x00, 0x00, 0xdc, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, // .............,..
	0x00, 0x60, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, // .`.......ISGN,..
	0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ......... ......
	0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, // ................
	0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x4f, 0x53, 0x47, // .SV_POSITION.OSG
	0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, // N,........... ..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41, 0x52, 0x47, 0x45, 0x54, 0x00, 0xab, // .....SV_TARGET..
	0xab, 0x53, 0x48, 0x44, 0x52, 0x40, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, // .SHDR@...@......
	0x00, 0x59, 0x00, 0x00, 0x04, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, // .Y...F. ........
	0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, // .e.... ......6..
	0x06, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, // .. ......F. ....
	0x00, 0x03, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x00, 0x40, 0x00,                   // .....>.....@.
};
static const uint8_t fs_debugdraw_fill_mtl[425] =
{
	0x46, 0x53, 0x48, 0x05, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x08, 0x75, 0x5f, 0x70, 0x61, 0x72, // FSH........u_par
	0x61, 0x6d, 0x73, 0x02, 0x04, 0x00, 0x00, 0x04, 0x00, 0x8b, 0x01, 0x00, 0x00, 0x75, 0x73, 0x69, // ams..........usi
	0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, 0x65, 0x20, 0x6d, 0x65, 0x74, // ng namespace met
	0x61, 0x6c, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, // al;.struct xlatM
	0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, // tlShaderInput {.
	0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, // };.struct xlatMt
	0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, // lShaderOutput {.
	0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, //   float4 gl_Frag
	0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, // Color;.};.struct
	0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, //  xlatMtlShaderUn
	0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, // iform {.  float4
	0x20, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x5b, 0x34, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, //  u_params[4];.};
	0x0a, 0x66, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, // .fragment xlatMt
	0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x78, 0x6c, // lShaderOutput xl
	0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x78, 0x6c, 0x61, 0x74, 0x4d, // atMtlMain (xlatM
	0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x5f, 0x6d, // tlShaderInput _m
	0x74, 0x6c, 0x5f, 0x69, 0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, 0x65, 0x5f, 0x69, 0x6e, 0x5d, // tl_i [[stage_in]
	0x5d, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, // ], constant xlat
	0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, // MtlShaderUniform
	0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, 0x75, 0x66, 0x66, 0x65, // & _mtl_u [[buffe
	0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x78, 0x6c, 0x61, 0x74, // r(0)]]).{.  xlat
	0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, // MtlShaderOutput 
	0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, // _mtl_o;.  _mtl_o
	0x2e, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, // .gl_FragColor = 
	0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x5b, // _mtl_u.u_params[
	0x33, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x5f, 0x6d, 0x74, // 3];.  return _mt
	0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                           // l_o;.}...
};
extern const uint8_t* fs_debugdraw_fill_pssl;
extern const uint32_t fs_debugdraw_fill_pssl_size;
