/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e4840; name: FUN_012e4840
 */


byte FUN_012e4840(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_28;
  
  lVar3 = FUN_01328440(*(undefined8 *)(param_1 + 0x360));
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  local_28 = FUN_0069d2b0();
  plVar4 = (long *)FUN_006b93b0(&local_28);
  lVar5 = *plVar4;
  lVar3 = plVar4[3];
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if ((*(int *)(param_1 + 0x308) == 4) || (*(int *)(param_1 + 0x308) == 1)) {
    bVar2 = lVar5 == 0x2183a1da081cfd3a;
  }
  else {
    bVar2 = true;
  }
  cVar1 = *(char *)(param_1 + 0x30c);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return bVar2 & cVar1 != '\0';
}


