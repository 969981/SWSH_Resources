/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00663af0; name: FUN_00663af0
 */


void FUN_00663af0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  
  local_130 = CONCAT44(local_130._4_4_,DAT_0213823c);
  local_138 = DAT_02138234;
  local_148 = DAT_02138224;
  local_140 = DAT_0213822c;
  plVar1 = *(long **)(*(long *)(param_1 + 0x178) + 8);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x38))
                             (plVar1,0x748,0x10,
                              "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_VertexFormatPool.cpp"
                              ,0x427);
  FUN_00664610(plVar1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x178));
  FUN_00664a00(plVar1,1);
  (**(code **)(*plVar1 + 0x118))(plVar1,"VERTEXFORMAT_POS");
  (**(code **)(*plVar1 + 0x88))(plVar1,1,&local_148);
  lVar3 = param_1 + 0x48;
  lVar2 = FUN_005fefc0(lVar3,1);
  *(long **)(lVar2 + 0x20) = plVar1;
  local_130 = 0x400000000;
  local_148 = 0;
  local_140 = 6;
  local_138 = 0xffffffff;
  local_128 = 0x1c00000000;
  local_118 = 0;
  local_120 = 0xffffffff00000000;
  plVar1 = *(long **)(*(long *)(param_1 + 0x178) + 8);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x38))
                             (plVar1,0x748,0x10,
                              "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_VertexFormatPool.cpp"
                              ,0x427);
  FUN_00664610(plVar1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x178));
  FUN_00664a00(plVar1,2);
  (**(code **)(*plVar1 + 0x118))(plVar1,"VERTEXFORMAT_POS_COLOR");
  (**(code **)(*plVar1 + 0x88))(plVar1,2,&local_148);
  lVar2 = FUN_005fefc0(lVar3,2);
  *(long **)(lVar2 + 0x20) = plVar1;
  local_138 = DAT_02138250;
  local_130 = DAT_02138258;
  local_148 = DAT_02138240;
  local_140 = DAT_02138248;
  local_118 = DAT_02138270;
  uStack_110 = DAT_02138278;
  local_128 = DAT_02138260;
  local_120 = DAT_02138268;
  local_f8 = CONCAT44(local_f8._4_4_,DAT_02138290);
  local_108 = DAT_02138280;
  uStack_100 = DAT_02138288;
  plVar1 = *(long **)(*(long *)(param_1 + 0x178) + 8);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x38))
                             (plVar1,0x748,0x10,
                              "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_VertexFormatPool.cpp"
                              ,0x427);
  FUN_00664610(plVar1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x178));
  FUN_00664a00(plVar1,3);
  (**(code **)(*plVar1 + 0x118))(plVar1,"VERTEXFORMAT_POS_COLOR_TEX");
  (**(code **)(*plVar1 + 0x88))(plVar1,3,&local_148);
  lVar2 = FUN_005fefc0(lVar3,3);
  *(long **)(lVar2 + 0x20) = plVar1;
  local_148 = DAT_02138294;
  local_140 = DAT_0213829c;
  local_128 = DAT_021382b4;
  local_120 = DAT_021382bc;
  local_138 = DAT_021382a4;
  local_130 = DAT_021382ac;
  local_108 = DAT_021382d4;
  uStack_100 = DAT_021382dc;
  local_118 = DAT_021382c4;
  uStack_110 = DAT_021382cc;
  local_e8 = DAT_021382f4;
  uStack_e0 = DAT_021382fc;
  local_f8 = DAT_021382e4;
  uStack_f0 = DAT_021382ec;
  plVar1 = *(long **)(*(long *)(param_1 + 0x178) + 8);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x38))
                             (plVar1,0x748,0x10,
                              "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_VertexFormatPool.cpp"
                              ,0x427);
  FUN_00664610(plVar1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x178));
  FUN_00664a00(plVar1,4);
  (**(code **)(*plVar1 + 0x118))(plVar1,"VERTEXFORMAT_POS_NORMAL_COLOR_TEX");
  (**(code **)(*plVar1 + 0x88))(plVar1,4,&local_148);
  lVar2 = FUN_005fefc0(lVar3,4);
  *(long **)(lVar2 + 0x20) = plVar1;
  local_148 = 0;
  local_140 = 6;
  local_138 = 0xffffffff;
  local_130 = 0x500000000;
  local_128 = 0x1000000000;
  local_118 = 0;
  local_120 = 0xffffffff00000000;
  plVar1 = *(long **)(*(long *)(param_1 + 0x178) + 8);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x38))
                             (plVar1,0x748,0x10,
                              "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_VertexFormatPool.cpp"
                              ,0x427);
  FUN_00664610(plVar1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x178));
  FUN_00664a00(plVar1,5);
  (**(code **)(*plVar1 + 0x118))(plVar1,"VERTEXFORMAT_POS_TEX");
  (**(code **)(*plVar1 + 0x88))(plVar1,2,&local_148);
  lVar2 = FUN_005fefc0(lVar3,5);
  *(long **)(lVar2 + 0x20) = plVar1;
  local_148 = 0;
  local_140 = 6;
  local_138 = 0xffffffff;
  local_130 = 0x500000000;
  local_128 = 0x600000000;
  local_118 = 0;
  local_120 = 0xffffffff00000000;
  plVar1 = *(long **)(*(long *)(param_1 + 0x178) + 8);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x38))
                             (plVar1,0x748,0x10,
                              "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_VertexFormatPool.cpp"
                              ,0x427);
  FUN_00664610(plVar1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x178));
  FUN_00664a00(plVar1,6);
  (**(code **)(*plVar1 + 0x118))(plVar1,"VERTEXFORMAT_POS_TEX3D");
  (**(code **)(*plVar1 + 0x88))(plVar1,2,&local_148);
  lVar2 = FUN_005fefc0(lVar3,6);
  *(long **)(lVar2 + 0x20) = plVar1;
  local_148 = 0;
  local_140 = 6;
  local_138 = 0xffffffff;
  local_130 = 0x300000000;
  local_128 = 0x600000000;
  local_118 = 0;
  local_120 = 0xffffffff00000000;
  plVar1 = *(long **)(*(long *)(param_1 + 0x178) + 8);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x38))
                             (plVar1,0x748,0x10,
                              "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_VertexFormatPool.cpp"
                              ,0x427);
  FUN_00664610(plVar1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x178));
  FUN_00664a00(plVar1,7);
  (**(code **)(*plVar1 + 0x118))(plVar1,"VERTEXFORMAT_POS_NORMAL");
  (**(code **)(*plVar1 + 0x88))(plVar1,2,&local_148);
  lVar2 = FUN_005fefc0(lVar3,7);
  *(long **)(lVar2 + 0x20) = plVar1;
  local_138 = DAT_02138314;
  local_130 = DAT_0213831c;
  local_148 = DAT_02138304;
  local_140 = DAT_0213830c;
  local_118 = DAT_02138334;
  uStack_110 = DAT_0213833c;
  local_128 = DAT_02138324;
  local_120 = DAT_0213832c;
  local_f8 = CONCAT44(local_f8._4_4_,DAT_02138354);
  local_108 = DAT_02138344;
  uStack_100 = DAT_0213834c;
  plVar1 = *(long **)(*(long *)(param_1 + 0x178) + 8);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x38))
                             (plVar1,0x748,0x10,
                              "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_VertexFormatPool.cpp"
                              ,0x427);
  FUN_00664610(plVar1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x178));
  FUN_00664a00(plVar1,8);
  (**(code **)(*plVar1 + 0x118))(plVar1,"VERTEXFORMAT_POS_NORMAL_TEX");
  (**(code **)(*plVar1 + 0x88))(plVar1,3,&local_148);
  lVar2 = FUN_005fefc0(lVar3,8);
  *(long **)(lVar2 + 0x20) = plVar1;
  memcpy(&local_148,&DAT_02138358,0x8c);
  plVar1 = *(long **)(*(long *)(param_1 + 0x178) + 8);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x38))
                             (plVar1,0x748,0x10,
                              "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_VertexFormatPool.cpp"
                              ,0x427);
  FUN_00664610(plVar1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x178));
  FUN_00664a00(plVar1,9);
  (**(code **)(*plVar1 + 0x118))(plVar1,"VERTEXFORMAT_POS_NORMAL_TEX_TAN");
  (**(code **)(*plVar1 + 0x88))(plVar1,5,&local_148);
  lVar2 = FUN_005fefc0(lVar3,9);
  *(long **)(lVar2 + 0x20) = plVar1;
  memcpy(&local_148,&DAT_021383e4,0xa8);
  plVar1 = *(long **)(*(long *)(param_1 + 0x178) + 8);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x38))
                             (plVar1,0x748,0x10,
                              "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_VertexFormatPool.cpp"
                              ,0x427);
  FUN_00664610(plVar1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x178));
  FUN_00664a00(plVar1,10);
  (**(code **)(*plVar1 + 0x118))(plVar1,"VERTEXFORMAT_POS_NORMAL_COLOR_TEX_TAN");
  (**(code **)(*plVar1 + 0x88))(plVar1,6,&local_148);
  lVar2 = FUN_005fefc0(lVar3,10);
  *(long **)(lVar2 + 0x20) = plVar1;
  memcpy(&local_148,&DAT_0213848c,0xa8);
  plVar1 = *(long **)(*(long *)(param_1 + 0x178) + 8);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x38))
                             (plVar1,0x748,0x10,
                              "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_VertexFormatPool.cpp"
                              ,0x427);
  FUN_00664610(plVar1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x178));
  FUN_00664a00(plVar1,0xb);
  (**(code **)(*plVar1 + 0x118))(plVar1,"VERTEXFORMAT_POS_NORMAL_TEX2_TAN");
  (**(code **)(*plVar1 + 0x88))(plVar1,6,&local_148);
  lVar2 = FUN_005fefc0(lVar3,0xb);
  *(long **)(lVar2 + 0x20) = plVar1;
  memcpy(&local_148,&DAT_02138534,0xe0);
  plVar1 = *(long **)(*(long *)(param_1 + 0x178) + 8);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x38))
                             (plVar1,0x748,0x10,
                              "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_VertexFormatPool.cpp"
                              ,0x427);
  FUN_00664610(plVar1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x178));
  FUN_00664a00(plVar1,0xc);
  (**(code **)(*plVar1 + 0x118))(plVar1,"VERTEXFORMAT_POS_NORMAL_COLOR_TEX4_TAN");
  (**(code **)(*plVar1 + 0x88))(plVar1,8,&local_148);
  lVar2 = FUN_005fefc0(lVar3,0xc);
  *(long **)(lVar2 + 0x20) = plVar1;
  memcpy(&local_148,&DAT_02138614,0xe0);
  plVar1 = *(long **)(*(long *)(param_1 + 0x178) + 8);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x38))
                             (plVar1,0x748,0x10,
                              "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_VertexFormatPool.cpp"
                              ,0x427);
  FUN_00664610(plVar1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x178));
  FUN_00664a00(plVar1,0xd);
  (**(code **)(*plVar1 + 0x118))(plVar1,"VERTEXFORMAT_POS_BLEND_NORMAL_COLOR_TEX_TAN");
  (**(code **)(*plVar1 + 0x88))(plVar1,8,&local_148);
  lVar2 = FUN_005fefc0(lVar3,0xd);
  *(long **)(lVar2 + 0x20) = plVar1;
  memcpy(&local_148,&DAT_021386f4,0x8c);
  plVar1 = *(long **)(*(long *)(param_1 + 0x178) + 8);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x38))
                             (plVar1,0x748,0x10,
                              "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_VertexFormatPool.cpp"
                              ,0x427);
  FUN_00664610(plVar1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x178));
  FUN_00664a00(plVar1,0xe);
  (**(code **)(*plVar1 + 0x118))(plVar1,"VERTEXFORMAT_POS_NORMAL_COLOR_MULTITEX2");
  (**(code **)(*plVar1 + 0x88))(plVar1,5,&local_148);
  lVar2 = FUN_005fefc0(lVar3,0xe);
  *(long **)(lVar2 + 0x20) = plVar1;
  memcpy(&local_148,&DAT_02138780,0xa8);
  plVar1 = *(long **)(*(long *)(param_1 + 0x178) + 8);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x38))
                             (plVar1,0x748,0x10,
                              "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_VertexFormatPool.cpp"
                              ,0x427);
  FUN_00664610(plVar1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x178));
  FUN_00664a00(plVar1,0xf);
  (**(code **)(*plVar1 + 0x118))(plVar1,"VERTEXFORMAT_POS_COLOR_TEX");
  (**(code **)(*plVar1 + 0x88))(plVar1,6,&local_148);
  lVar2 = FUN_005fefc0(lVar3,0xf);
  *(long **)(lVar2 + 0x20) = plVar1;
  memcpy(&local_148,&DAT_02138828,0xc4);
  plVar1 = *(long **)(*(long *)(param_1 + 0x178) + 8);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x38))
                             (plVar1,0x748,0x10,
                              "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_VertexFormatPool.cpp"
                              ,0x427);
  FUN_00664610(plVar1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x178));
  FUN_00664a00(plVar1,0x10);
  (**(code **)(*plVar1 + 0x118))(plVar1,"VERTEXFORMAT_POS_NORMAL_COLOR_MULTITEX4");
  (**(code **)(*plVar1 + 0x88))(plVar1,7,&local_148);
  lVar3 = FUN_005fefc0(lVar3,0x10);
  *(long **)(lVar3 + 0x20) = plVar1;
  return;
}


