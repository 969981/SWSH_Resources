/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b1810; name: FUN_007b1810
 */


void FUN_007b1810(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  
  *param_1 = (long)(PTR_DAT_02716950 + 0x10);
  *(undefined1 *)(param_1 + 1) = 1;
  FUN_017cbe80(param_1 + 3);
  FUN_017cbe80(param_1 + 4);
  FUN_017cbe80(param_1 + 5);
  plVar3 = param_1 + 9;
  *plVar3 = 0;
  param_1[10] = 0;
  param_1[8] = (long)plVar3;
  FUN_017e35a0(param_1 + 0xb,0,0);
  puVar1 = PTR_DAT_02716958;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  uVar2 = *(undefined8 *)PTR_DAT_02716900;
  FUN_017cbf30(param_1 + 3,uVar2);
  FUN_017cbf30(param_1 + 4,uVar2);
  FUN_017cbf30(param_1 + 5,uVar2);
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  FUN_007b12d0(param_1 + 8,*plVar3);
  param_1[10] = 0;
  param_1[8] = (long)plVar3;
  *plVar3 = 0;
  FUN_017e3870(param_1 + 0xb);
  return;
}


