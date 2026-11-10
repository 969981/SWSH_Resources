/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db7bb0; name: FUN_00db7bb0
 */


void FUN_00db7bb0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_1 + 0x2a0) != 0) {
    return;
  }
  lVar2 = FUN_00db7d40(param_1,param_2,param_1 + 0x288,&DAT_02160640);
  plVar3 = *(long **)(param_1 + 0x2a8);
  plVar5 = *(long **)(param_1 + 0x2b0);
  *(long *)(param_1 + 0x2a0) = lVar2;
  if ((plVar3 != plVar5) && (lVar2 != *plVar3)) {
    do {
      plVar3 = plVar3 + 1;
      if (plVar5 == plVar3) goto LAB_00db7c58;
    } while (lVar2 != *plVar3);
  }
  if (plVar3 == plVar5) {
LAB_00db7c58:
    if (plVar5 == *(long **)(param_1 + 0x2b8)) {
      FUN_00db9580(param_1 + 0x2a8,param_1 + 0x2a0);
      lVar2 = *(long *)(param_1 + 0x2a0);
      pcVar4 = *(code **)(lVar2 + 0x98);
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x2c0);
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar6;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      *plVar5 = *(long *)(param_1 + 0x2a0);
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      *(long *)(param_1 + 0x2b0) = *(long *)(param_1 + 0x2b0) + 8;
      lVar2 = *(long *)(param_1 + 0x2a0);
      pcVar4 = *(code **)(lVar2 + 0x98);
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 0x2a0);
    pcVar4 = *(code **)(lVar2 + 0x98);
  }
  puVar1 = (undefined8 *)(lVar2 + 0x90);
  if (pcVar4 != (code *)0x0) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    (*pcVar4)(lVar2 + 0xb0);
  }
  *(long *)(lVar2 + 0xb0) = param_1;
  *puVar1 = &LAB_00db9740;
  puVar1[1] = &LAB_00db97d0;
  puVar1[2] = &LAB_00db97e0;
  puVar1[3] = &LAB_00db97f0;
  *(undefined8 *)(*(long *)(param_1 + 0x2a0) + 0x170) = 0x13f09be44fd5a904;
  return;
}


