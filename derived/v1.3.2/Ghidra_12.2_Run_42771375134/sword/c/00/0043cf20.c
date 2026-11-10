/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0043cf20; name: FUN_0043cf20
 */


undefined4 FUN_0043cf20(long param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  if (*(ushort *)(param_1 + 0x34) - 0x104 < 2) {
    FUN_0043d200(param_1,0,uVar3,*(undefined4 *)(param_2 + 0x38));
    FUN_0043b5c0(*(undefined8 *)PTR_DAT_02712de0,uVar3,param_1 + 0x38,
                 *(undefined4 *)(param_2 + 0x38));
  }
  else if ((*(ushort *)(param_1 + 0x34) - 0x102 < 2) &&
          (plVar2 = (long *)FUN_0043e8c0(param_1), plVar2 != (long *)0x0)) {
    uVar1 = FUN_0043d130(param_1,0,uVar3,*(undefined4 *)(param_2 + 0x38));
    FUN_004399e0(*(undefined8 *)PTR_DAT_02712de0,plVar2,uVar3,*(undefined4 *)(param_2 + 0x38));
    (**(code **)(*plVar2 + 0x18))(plVar2);
    return uVar1;
  }
  return 1;
}


