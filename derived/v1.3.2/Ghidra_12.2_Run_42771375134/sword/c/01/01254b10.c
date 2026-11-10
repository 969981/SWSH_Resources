/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01254b10; name: FUN_01254b10
 */


void FUN_01254b10(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  
  *param_1 = (long)(PTR_DAT_02726800 + 0x10);
  *(undefined1 *)(param_1 + 1) = 1;
  FUN_017cbe80(param_1 + 2);
  FUN_017cbe80(param_1 + 3);
  FUN_017cbe80(param_1 + 4);
  FUN_017e35a0(param_1 + 7,0,0);
  param_1[0x10] = 0;
  plVar3 = param_1 + 0xf;
  *plVar3 = 0;
  puVar1 = PTR_DAT_02726808;
  param_1[0xe] = (long)plVar3;
  *param_1 = (long)(puVar1 + 0x10);
  uVar2 = *(undefined8 *)PTR_DAT_02716900;
  FUN_017cbf30(param_1 + 2,uVar2);
  FUN_017cbf30(param_1 + 3,uVar2);
  FUN_017cbf30(param_1 + 4,uVar2);
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  FUN_017e3870(param_1 + 7);
  FUN_007b12d0(param_1 + 0xe,*plVar3);
  param_1[0x10] = 0;
  param_1[0xe] = (long)plVar3;
  *plVar3 = 0;
  return;
}


