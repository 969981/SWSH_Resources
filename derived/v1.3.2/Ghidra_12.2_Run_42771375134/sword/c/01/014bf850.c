/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014bf850; name: FUN_014bf850
 */


undefined4 FUN_014bf850(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  
  lVar3 = FUN_019c1410(param_1,&DAT_01d0b4b2);
  lVar4 = FUN_019cc190(param_1);
  if (lVar4 != 0) {
    plVar5 = (long *)FUN_019cc190(param_1);
    iVar1 = (**(code **)(*plVar5 + 0x48))();
    if (iVar1 != 2) {
      return param_3;
    }
  }
  if (lVar3 != 0) {
    param_3 = FUN_014c30d0(*(undefined8 *)PTR_DAT_02710820,
                           *(undefined4 *)(lVar3 + (ulong)*(uint *)(lVar3 + 4)));
  }
  uVar6 = *(undefined8 *)PTR_DAT_02710820;
  uVar2 = FUN_014c2840(param_2);
  uVar6 = FUN_014c2820(uVar6,param_3,uVar2);
  lVar3 = FUN_019cc190(param_1);
  if (lVar3 == 0) {
    FUN_019cc1a0(param_1,uVar6);
  }
  return param_3;
}


