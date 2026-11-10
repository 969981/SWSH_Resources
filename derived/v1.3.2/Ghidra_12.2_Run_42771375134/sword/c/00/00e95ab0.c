/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e95ab0; name: FUN_00e95ab0
 */


long FUN_00e95ab0(undefined4 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  float extraout_s0;
  undefined4 local_34;
  
  lVar3 = param_2;
  if (*(char *)(param_2 + 0x470) != '\0') {
    local_34 = param_1;
    iVar2 = FUN_00de1090(param_2 + 0x3b0,&local_34);
    lVar3 = FUN_00de1380(param_2 + 0x3b0,iVar2);
    if (0.0 < extraout_s0) {
      uVar4 = *(long *)(param_2 + 0x448) - *(long *)(param_2 + 0x440) >> 2;
      if ((ulong)(long)iVar2 < uVar4) {
        iVar1 = iVar2 + 1;
        if ((int)((ulong)(*(long *)(param_2 + 0x3c0) - *(long *)(param_2 + 0x3b8)) >> 5) <=
            iVar2 + 1) {
          iVar1 = iVar2;
        }
        if ((ulong)(long)iVar1 < uVar4) {
          return param_2 + 0x440;
        }
      }
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
  }
  return lVar3;
}


