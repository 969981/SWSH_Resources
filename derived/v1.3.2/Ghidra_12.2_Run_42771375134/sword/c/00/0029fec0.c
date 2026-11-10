/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029fec0; name: FUN_0029fec0
 */


void FUN_0029fec0(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = *(uint *)(param_3 + 8);
  *(undefined2 *)((long)param_1 + 10) = 3;
  *(short *)(param_1 + 1) = (short)*(undefined4 *)(&DAT_01cd52f8 + (ulong)uVar1 * 4);
  puVar2 = PTR_DAT_02711f90;
  *(undefined4 *)(param_1 + 3) = 1;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[2] = (long)(puVar2 + 0xd0);
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)(param_3 + 0xc);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 0x10);
  param_1[5] = *(long *)(param_3 + 0x18);
  param_1[6] = *(long *)(param_3 + 0x20);
  fVar3 = *(float *)(param_3 + 0x30);
  fVar4 = *(float *)(param_3 + 0x2c);
  fVar5 = *(float *)(param_3 + 0x38);
  fVar6 = *(float *)(param_3 + 0x3c);
  *(float *)(param_1 + 7) = (*(float *)(param_3 + 0x28) + *(float *)(param_3 + 0x34)) * 0.5;
  *(float *)((long)param_1 + 0x3c) = (fVar4 + fVar5) * 0.5;
  *(float *)(param_1 + 8) = (fVar3 + fVar6) * 0.5;
  fVar5 = *(float *)(param_3 + 0x2c);
  fVar3 = *(float *)(param_3 + 0x30);
  fVar4 = *(float *)(param_3 + 0x38);
  fVar6 = *(float *)(param_3 + 0x3c);
  *(float *)((long)param_1 + 0x44) = (*(float *)(param_3 + 0x34) - *(float *)(param_3 + 0x28)) * 0.5
  ;
  *(float *)((long)param_1 + 0x4c) = (fVar6 - fVar3) * 0.5;
  *(float *)(param_1 + 9) = (fVar4 - fVar5) * 0.5;
  param_1[10] = *(long *)(param_3 + 0x40);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_3 + 0x48);
  *(undefined1 *)((long)param_1 + 0x5c) = *(undefined1 *)(param_3 + 0x4c);
  param_1[0xc] = *(long *)(param_3 + 0x50);
  param_1[0xd] = *(long *)(param_3 + 0x58);
  param_1[0xe] = *(long *)(param_3 + 0x60);
  param_1[0xf] = param_2;
  param_1[0x10] = *(long *)(param_3 + 0x68);
  param_1[0x11] = *(long *)(param_3 + 0x70);
  param_1[0x12] = *(long *)(param_3 + 0x78);
  param_1[0x13] = *(long *)(param_3 + 0x80);
  *(undefined8 *)(param_3 + 0x18) = 0;
  *(undefined8 *)(param_3 + 0x20) = 0;
  *(undefined8 *)(param_3 + 0x40) = 0;
  *(undefined8 *)(param_3 + 0x50) = 0;
  *(undefined8 *)(param_3 + 0x58) = 0;
  *(undefined8 *)(param_3 + 0x60) = 0;
  *(undefined8 *)(param_3 + 0x68) = 0;
  *(undefined8 *)(param_3 + 0x80) = 0;
  *(undefined8 *)(param_3 + 0x70) = 0;
  *(undefined8 *)(param_3 + 0x78) = 0;
  return;
}


