/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de13c0; name: FUN_00de13c0
 */


void FUN_00de13c0(undefined4 param_1,long param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)(param_2 + 8);
  if ((ulong)(*(long *)(param_2 + 0x10) - lVar3 >> 5) <= (ulong)(long)param_3) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar4 = (long)param_3 * 0x20;
  puVar1 = (undefined8 *)(lVar3 + lVar4);
  uVar5 = *puVar1;
  puVar2 = (undefined8 *)(lVar3 + lVar4);
  puVar2[1] = puVar1[1];
  *puVar2 = CONCAT44(param_1,(int)uVar5);
  return;
}


