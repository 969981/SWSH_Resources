/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00726850; name: FUN_00726850
 */


void FUN_00726850(long param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((ulong)(*(long *)(param_1 + 0x478) - *(long *)(param_1 + 0x470) >> 6) <= (ulong)param_2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x470) + (ulong)param_2 * 0x40);
  uVar2 = param_3[1];
  puVar1[3] = param_3[3];
  uVar3 = *param_3;
  uVar4 = param_3[2];
  puVar1[1] = uVar2;
  puVar1[2] = uVar4;
  *puVar1 = uVar3;
  uVar2 = param_3[5];
  puVar1[7] = param_3[7];
  uVar3 = param_3[6];
  puVar1[4] = param_3[4];
  puVar1[5] = uVar2;
  puVar1[6] = uVar3;
  *(ulong *)(param_1 + 0x4e0) = *(ulong *)(param_1 + 0x4e0) | 1;
  return;
}


