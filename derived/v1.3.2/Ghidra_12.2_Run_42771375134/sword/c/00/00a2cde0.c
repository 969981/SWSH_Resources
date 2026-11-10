/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a2cde0; name: FUN_00a2cde0
 */


void FUN_00a2cde0(long *param_1,long param_2)

{
  void *__src;
  size_t __n;
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  long *plVar4;
  void *__dest;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  void *__src_00;
  undefined1 auStack_48 [8];
  
  FUN_00ff5da0();
  *(undefined1 *)(param_1 + 0xc) = 0;
  puVar1 = PTR_DAT_02718f98;
  *(undefined8 *)((long)param_1 + 100) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0xe] = 0;
  param_1[0xf] = 0xffffffff;
  param_1[9] = (long)(puVar1 + 0x58);
  param_1[10] = (long)(puVar1 + 0x98);
  *(undefined2 *)((long)param_1 + 0x18c) = 0x1f1f;
  *(undefined4 *)((long)param_1 + 0x16c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x31) = 0x1f1f1f1f;
  *(undefined4 *)((long)param_1 + 0x194) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x33) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x20c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x42) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x2d) = 1;
  *(undefined2 *)(param_1 + 0x2f) = 0;
  param_1[0x29] = -1;
  *(undefined2 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x32) = 8;
  *(undefined4 *)((long)param_1 + 0x19c) = 6;
  *(undefined2 *)((long)param_1 + 0x1a4) = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 1;
  *(undefined1 *)((long)param_1 + 0x1d1) = 0;
  *(undefined2 *)((long)param_1 + 0x1d2) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)((long)param_1 + 0x21c) = 0;
  param_1[0x19] = -0x100000000;
  param_1[0x1a] = 0;
  param_1[0x2e] = 3;
  *(undefined4 *)((long)param_1 + 0x1cc) = 3;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x10] = -1;
  param_1[0x11] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined8 *)((long)param_1 + 0x214) = 0;
  *(undefined1 *)((long)param_1 + 0x21d) = 1;
  *(undefined1 *)((long)param_1 + 0x24a) = 0;
  *(undefined2 *)(param_1 + 0x49) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)((long)param_1 + 0x24c) = 0;
  *(undefined8 *)((long)param_1 + 0x235) = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 8;
  *(undefined1 *)((long)param_1 + 0x254) = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  *(undefined1 *)((long)param_1 + 0x25c) = 0;
  puVar2 = PTR_LAB_02718fa8;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  puVar1 = PTR_FUN_02718fa0;
  param_1[0x4e] = (long)puVar2;
  puVar2 = PTR_LAB_02718fb0;
  param_1[0x4f] = (long)puVar1;
  puVar1 = PTR_LAB_02718fb8;
  plVar4 = (long *)param_1[1];
  *(undefined4 *)(param_1 + 0x6b) = 1;
  param_1[0x50] = (long)puVar2;
  param_1[0x51] = (long)puVar1;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)((long)param_1 + 0x35c) = 0;
  *(undefined2 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)((long)param_1 + 0x36e) = 0;
  *(undefined2 *)((long)param_1 + 0x36c) = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x6e] = 0;
  *(undefined1 *)(param_1 + 0x6f) = 0;
  *(undefined1 *)((long)param_1 + 0x38a) = 0;
  *(undefined2 *)(param_1 + 0x71) = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x73) = 0;
  param_1[0x72] = 0;
  param_1[0x74] = (long)plVar4;
  param_1[0x75] = 0x1fffffffffffffff;
  param_1[0x7a] = 0;
  param_1[0x7c] = (long)plVar4;
  param_1[0x7d] = 0x1fffffffffffffff;
  param_1[0x82] = 0;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  __dest = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,0xd8,4);
  __src_00 = (void *)param_1[0x84];
  pvVar7 = __dest;
  if (__src_00 != (void *)0x0) {
    lVar6 = param_1[0x85];
    __src = (void *)((long)__src_00 + lVar6 * 8);
    if (lVar6 == 0) {
      lVar6 = -(long)__src;
    }
    else {
      memmove(__dest,__src_00,lVar6 * 8);
      pvVar7 = (void *)((long)__dest + lVar6 * 8);
      lVar6 = param_1[0x85] * 8 - (long)__src;
    }
    __n = (long)__src_00 + lVar6;
    if (__n != 0) {
      memmove(pvVar7,__src,__n);
      pvVar7 = (void *)((long)pvVar7 + __n);
    }
    (**(code **)(*(long *)param_1[0x7c] + 0x18))
              ((long *)param_1[0x7c],param_1[0x84],param_1[0x86] << 3,4);
  }
  param_1[0x86] = 0x1b;
  *(undefined1 *)(param_1 + 0x88) = 0;
  param_1[0x8a] = 0;
  param_1[0x85] = (long)pvVar7 - (long)__dest >> 3;
  plVar4 = param_1 + 0x72;
  param_1[0x84] = (long)__dest;
  *(undefined4 *)(param_1 + 0x89) = 0x1f;
  *(undefined4 *)(param_1 + 0x8b) = 0x1f;
  param_1[0x8c] = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0x1f;
  *(undefined1 *)((long)param_1 + 0x46c) = 0;
  param_1[0x8e] = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0x1f;
  *(undefined1 *)((long)param_1 + 0x47c) = 0;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x91) = 0x1f;
  *(undefined2 *)((long)param_1 + 0x48c) = 0;
  param_1[0x92] = 0;
  *(undefined4 *)(param_1 + 0x93) = 0x1f;
  *(undefined2 *)((long)param_1 + 0x49c) = 0;
  param_1[0x94] = 0;
  uVar3 = FUN_008d3750();
  *(undefined1 *)(param_1 + 0x95) = uVar3;
  *(undefined8 *)((long)param_1 + 0x4ba) = 0;
  *(undefined2 *)((long)param_1 + 0x4c2) = 0;
  *(undefined8 *)((long)param_1 + 0x4b2) = 0;
  *(undefined8 *)((long)param_1 + 0x4aa) = 0;
  *(undefined2 *)(param_1 + 0x9b) = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
  param_1[0xa4] = 0;
  param_1[0xa3] = 0;
  param_1[0xa2] = 0;
  param_1[0xa1] = 0;
  uVar3 = FUN_008d3750();
  *(undefined1 *)(param_1 + 0xa5) = uVar3;
  *(undefined8 *)((long)param_1 + 0x53a) = 0;
  *(undefined2 *)((long)param_1 + 0x542) = 0;
  *(undefined8 *)((long)param_1 + 0x532) = 0;
  *(undefined8 *)((long)param_1 + 0x52a) = 0;
  *(undefined2 *)(param_1 + 0xab) = 0;
  param_1[0xaa] = 0;
  param_1[0xa9] = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  param_1[0xaf] = 0;
  param_1[0xae] = 0;
  param_1[0xad] = 0;
  param_1[0xac] = 0;
  param_1[0xb4] = 0;
  param_1[0xb3] = 0;
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  uVar3 = FUN_008d3750();
  *(undefined1 *)(param_1 + 0xb5) = uVar3;
  *(undefined8 *)((long)param_1 + 0x5ba) = 0;
  *(undefined2 *)((long)param_1 + 0x5c2) = 0;
  *(undefined8 *)((long)param_1 + 0x5b2) = 0;
  *(undefined8 *)((long)param_1 + 0x5aa) = 0;
  *(undefined2 *)(param_1 + 0xbb) = 0;
  param_1[0xba] = 0;
  param_1[0xb9] = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  param_1[0xbf] = 0;
  param_1[0xbe] = 0;
  param_1[0xbd] = 0;
  param_1[0xbc] = 0;
  param_1[0xc4] = 0;
  param_1[0xc3] = 0;
  param_1[0xc2] = 0;
  param_1[0xc1] = 0;
  thunk_FUN_011f3570(param_1 + 0xc5);
  param_1[199] = 0;
  param_1[0xc6] = 0;
  uVar5 = FUN_00a2d9c0(param_2 + 0x50);
  if ((uVar5 & 1) == 0) {
    param_2 = 0;
  }
  param_1[200] = param_2;
  FUN_00a2d2b0(param_1 + 0xc9);
  param_1[0x17e] = -1;
  param_1[0x17d] = -1;
  lVar6 = FUN_00a2dc90(auStack_48,param_1[1]);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (*plVar4 != 0) {
    (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
    *plVar4 = 0;
  }
  *plVar4 = lVar6;
  FUN_00a0b6f0(lVar6);
  return;
}


