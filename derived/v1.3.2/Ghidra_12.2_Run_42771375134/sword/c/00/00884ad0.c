/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00884ad0; name: FUN_00884ad0
 */


undefined8 FUN_00884ad0(long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x58))(param_1,0);
  if (((((lVar2 == 0) || (uVar3 = FUN_0087d610(lVar2,2), (uVar3 & 1) != 0)) ||
       (iVar1 = FUN_008783b0(lVar2), iVar1 != param_2)) &&
      ((((((lVar2 = (**(code **)(*param_1 + 0x58))(param_1,1), lVar2 == 0 ||
           (uVar3 = FUN_0087d610(lVar2,2), (uVar3 & 1) != 0)) ||
          (iVar1 = FUN_008783b0(lVar2), iVar1 != param_2)) &&
         (((lVar2 = (**(code **)(*param_1 + 0x58))(param_1,2), lVar2 == 0 ||
           (uVar3 = FUN_0087d610(lVar2,2), (uVar3 & 1) != 0)) ||
          (iVar1 = FUN_008783b0(lVar2), iVar1 != param_2)))) &&
        (((lVar2 = (**(code **)(*param_1 + 0x58))(param_1,3), lVar2 == 0 ||
          (uVar3 = FUN_0087d610(lVar2,2), (uVar3 & 1) != 0)) ||
         (iVar1 = FUN_008783b0(lVar2), iVar1 != param_2)))) &&
       (((lVar2 = (**(code **)(*param_1 + 0x58))(param_1,4), lVar2 == 0 ||
         (uVar3 = FUN_0087d610(lVar2,2), (uVar3 & 1) != 0)) ||
        (iVar1 = FUN_008783b0(lVar2), iVar1 != param_2)))))) &&
     (((lVar2 = (**(code **)(*param_1 + 0x58))(param_1,5), lVar2 == 0 ||
       (uVar3 = FUN_0087d610(lVar2,2), (uVar3 & 1) != 0)) ||
      (iVar1 = FUN_008783b0(lVar2), iVar1 != param_2)))) {
    return 0;
  }
  return 1;
}


