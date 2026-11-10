/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0042bd00; name: FUN_0042bd00
 */


void FUN_0042bd00(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_02712cf8 + 0x10);
  param_1[1] = 0;
  puVar2 = PTR_DAT_02712d00;
  lVar4 = *(long *)(PTR_DAT_02712d00 + 8);
  param_1[2] = 0;
  param_1[3] = lVar4;
  plVar1 = (long *)(puVar2 + 0x10);
  if (*(long *)(puVar2 + 0x10) != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
  }
  *plVar1 = (long)param_1;
  puVar3 = PTR_DAT_02712d08;
  *(long **)(puVar2 + 8) = param_1;
  *(int *)puVar2 = *(int *)puVar2 + 1;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x84) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x11) = 1;
  param_1[0xc] = 0;
  param_1[0xd] = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0x3f800000;
  return;
}


