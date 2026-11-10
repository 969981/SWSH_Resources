/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d43c0; name: FUN_004d43c0
 */


void FUN_004d43c0(long *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  puVar1 = PTR_DAT_027131f8 + 0x168;
  *param_1 = (long)(PTR_DAT_027131f8 + 0x10);
  param_1[0x18] = (long)puVar1;
  FUN_004cfb30();
  FUN_004d19e0(param_1);
  plVar3 = (long *)param_1[4];
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x40))(plVar3,0);
    puVar4 = (undefined8 *)param_1[4];
    if (puVar4 != (undefined8 *)0x0) {
      uVar2 = *(undefined4 *)PTR_DAT_02712e28;
      (**(code **)*puVar4)(puVar4);
      FUN_00404870(uVar2,puVar4);
    }
  }
  if (param_1[0x11] != 0) {
    FUN_004047f0(*(undefined4 *)PTR_DAT_02712e28);
    param_1[0x11] = 0;
  }
  FUN_004d18a0(param_1);
  return;
}


