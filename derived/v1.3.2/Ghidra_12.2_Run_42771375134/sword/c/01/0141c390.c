/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0141c390; name: FUN_0141c390
 */


void FUN_0141c390(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long local_30;
  long local_28;
  
  local_28 = *param_2;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  local_30 = *param_3;
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x10))();
  }
  FUN_00ff5fc0(param_1,&local_28,&local_30);
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    local_30 = 0;
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  puVar1 = PTR_DAT_02729970;
  param_1[0x47] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x46] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  param_1[9] = (long)(puVar1 + 0x90);
  param_1[10] = (long)(puVar1 + 0xd0);
  param_1[100] = -0x340d631b7bddd9bb;
  param_1[0x10] = -0x340d631b7bddd9bb;
  param_1[0x11] = -0x340d631b7bddd9bb;
  param_1[0x12] = -0x340d631b7bddd9bb;
  param_1[0x13] = -0x340d631b7bddd9bb;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((long)param_1 + 0x434) = 0;
  *(undefined4 *)((long)param_1 + 0x44c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8a) = 0xffffffff;
  param_1[0x88] = 0;
  *(undefined4 *)(param_1 + 0x89) = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  *(undefined8 *)((long)param_1 + 0x454) = 0;
  *(undefined1 *)((long)param_1 + 0x45d) = 1;
  *(undefined1 *)((long)param_1 + 0x45c) = 0;
  *(undefined1 *)((long)param_1 + 0x48a) = 0;
  *(undefined2 *)(param_1 + 0x91) = 0;
  param_1[0x90] = 0;
  *(undefined4 *)((long)param_1 + 0x48c) = 0;
  *(undefined8 *)((long)param_1 + 0x475) = 0;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  *(undefined4 *)(param_1 + 0x92) = 8;
  *(undefined1 *)((long)param_1 + 0x494) = 0;
  *(undefined4 *)(param_1 + 0x93) = 0;
  *(undefined1 *)((long)param_1 + 0x49c) = 0;
  puVar2 = PTR_LAB_02718fa8;
  *(undefined4 *)(param_1 + 0x94) = 0;
  puVar1 = PTR_FUN_02718fa0;
  param_1[0x96] = (long)puVar2;
  puVar2 = PTR_LAB_02718fb0;
  param_1[0x97] = (long)puVar1;
  puVar1 = PTR_LAB_02718fb8;
  param_1[0x98] = (long)puVar2;
  param_1[0x99] = (long)puVar1;
  param_1[0xad] = 0;
  param_1[0xac] = 0;
  param_1[0xab] = 0;
  param_1[0xaa] = 0;
  param_1[0xbd] = 0;
  param_1[0xbc] = 0;
  param_1[0xbb] = 0;
  param_1[0xba] = 0;
  param_1[0xcd] = 0;
  param_1[0xcc] = 0;
  param_1[0xcb] = 0;
  param_1[0xca] = 0;
  param_1[0xdd] = 0;
  param_1[0xdc] = 0;
  param_1[0xdb] = 0;
  param_1[0xda] = 0;
  param_1[0xed] = 0;
  param_1[0xec] = 0;
  param_1[0xeb] = 0;
  param_1[0xea] = 0;
  param_1[0xfd] = 0;
  param_1[0xfc] = 0;
  param_1[0xfb] = 0;
  param_1[0xfa] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  param_1[0xa7] = 0;
  param_1[0xa6] = 0;
  param_1[0x110] = 0;
  param_1[0x10f] = 0;
  param_1[0x10e] = 0;
  param_1[0x10d] = 0;
  param_1[0x10c] = 0;
  param_1[0x10b] = 0;
  param_1[0x10a] = 0;
  *(undefined4 *)(param_1 + 0x111) = 0x3c;
  *(undefined1 *)((long)param_1 + 0x88c) = 0;
  param_1[0x112] = 0;
  param_1[0x117] = 0;
  param_1[0x116] = 0;
  param_1[0x115] = 0;
  param_1[0x114] = 0;
  *(undefined1 *)(param_1 + 0x124) = 0;
  puVar1 = PTR_LAB_02729978;
  *(undefined4 *)(param_1 + 0x86) = 5;
  puVar2 = PTR_LAB_02729980;
  param_1[0x126] = (long)puVar1;
  puVar1 = PTR_LAB_02729988;
  param_1[0x127] = (long)puVar2;
  puVar2 = PTR_LAB_02729990;
  param_1[0x128] = (long)puVar1;
  param_1[0x129] = (long)puVar2;
  param_1[0x139] = 0;
  param_1[0x138] = 0;
  param_1[0x137] = 0;
  param_1[0x136] = 0;
  param_1[0x149] = 0;
  param_1[0x148] = 0;
  param_1[0x147] = 0;
  param_1[0x146] = 0;
  *(undefined1 *)(param_1 + 0x156) = 0;
  param_1[0x15b] = 0;
  param_1[0x15a] = 0;
  param_1[0x159] = 0;
  param_1[0x158] = 0;
  return;
}


