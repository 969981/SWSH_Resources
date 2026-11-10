/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c1ade0; name: FUN_00c1ade0
 */


void FUN_00c1ade0(char *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_bc8 [664];
  char local_930 [24];
  long local_918;
  int local_8b8 [530];
  long local_70;
  
  lVar1 = FUN_00c188d0();
  if ((((lVar1 != 0) && (lVar2 = FUN_00bda9a0(), lVar2 != 0)) &&
      (FUN_00bd9f00(local_8b8,lVar1), local_8b8[0] != 0)) &&
     ((local_70 == 0x644 && (FUN_00bdc170(local_930,lVar1), local_930[0] != '\0')))) {
    if ((((local_918 != 0) &&
         ((*(long *)PTR_DAT_02716748 != 0 && (lVar2 = FUN_007ad1c0(), lVar2 != 0)))) &&
        (*(long *)PTR_DAT_02710798 != 0)) &&
       (lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8), lVar2 != 0)) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      FUN_00bdc450(lVar1);
                    /* WARNING: Subroutine does not return */
      memset(auStack_bc8,0,0x298);
    }
    *param_1 = '\0';
    if (local_930[0] == '\0') {
      return;
    }
    param_1 = local_930;
  }
  *param_1 = '\0';
  return;
}


