/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa42c0; name: FUN_00fa42c0
 */


long FUN_00fa42c0(void)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  plVar3 = *(long **)(lVar4 + 0x58);
  if (plVar3 != (long *)0x0) {
    (**(code **)(plVar3[9] + 0x10))();
  }
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  lVar4 = (**(code **)(*plVar3 + 0x50))(plVar3,0);
  if ((((((((lVar4 == 0) || (uVar2 = FUN_0087d610(lVar4,2), (uVar2 & 1) != 0)) ||
          (iVar1 = FUN_0087afd0(lVar4), iVar1 == 0)) ||
         ((iVar1 = FUN_008783b0(lVar4), iVar1 < 1 || (iVar1 = FUN_008783b0(lVar4), 0x382 < iVar1))))
        && ((((lVar4 = (**(code **)(*plVar3 + 0x50))(plVar3,1), lVar4 == 0 ||
              ((uVar2 = FUN_0087d610(lVar4,2), (uVar2 & 1) != 0 ||
               (iVar1 = FUN_0087afd0(lVar4), iVar1 == 0)))) ||
             (iVar1 = FUN_008783b0(lVar4), iVar1 < 1)) ||
            (iVar1 = FUN_008783b0(lVar4), 0x382 < iVar1)))) &&
       ((((lVar4 = (**(code **)(*plVar3 + 0x50))(plVar3,2), lVar4 == 0 ||
          (uVar2 = FUN_0087d610(lVar4,2), (uVar2 & 1) != 0)) ||
         (iVar1 = FUN_0087afd0(lVar4), iVar1 == 0)) ||
        ((iVar1 = FUN_008783b0(lVar4), iVar1 < 1 || (iVar1 = FUN_008783b0(lVar4), 0x382 < iVar1)))))
       ) && (((lVar4 = (**(code **)(*plVar3 + 0x50))(plVar3,3), lVar4 == 0 ||
              ((uVar2 = FUN_0087d610(lVar4,2), (uVar2 & 1) != 0 ||
               (iVar1 = FUN_0087afd0(lVar4), iVar1 == 0)))) ||
             ((iVar1 = FUN_008783b0(lVar4), iVar1 < 1 ||
              (iVar1 = FUN_008783b0(lVar4), 0x382 < iVar1)))))) &&
     (((((lVar4 = (**(code **)(*plVar3 + 0x50))(plVar3,4), lVar4 == 0 ||
         (uVar2 = FUN_0087d610(lVar4,2), (uVar2 & 1) != 0)) ||
        (iVar1 = FUN_0087afd0(lVar4), iVar1 == 0)) ||
       ((iVar1 = FUN_008783b0(lVar4), iVar1 < 1 || (iVar1 = FUN_008783b0(lVar4), 0x382 < iVar1))))
      && ((((lVar4 = (**(code **)(*plVar3 + 0x50))(plVar3,5), lVar4 == 0 ||
            ((uVar2 = FUN_0087d610(lVar4,2), (uVar2 & 1) != 0 ||
             (iVar1 = FUN_0087afd0(lVar4), iVar1 == 0)))) ||
           (iVar1 = FUN_008783b0(lVar4), iVar1 < 1)) || (iVar1 = FUN_008783b0(lVar4), 0x382 < iVar1)
          ))))) {
    lVar4 = 0;
  }
  (**(code **)(plVar3[9] + 0x18))(plVar3 + 9);
  return lVar4;
}


