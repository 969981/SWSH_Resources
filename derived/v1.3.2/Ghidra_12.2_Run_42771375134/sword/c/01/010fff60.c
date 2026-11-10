/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010fff60; name: FUN_010fff60
 */


void FUN_010fff60(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 8);
  uVar3 = (**(code **)(*plVar6 + 0x10))(plVar6,0xc,4);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar6;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  FUN_01562e10(uVar3,4);
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  lVar4 = *(long *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  if (lVar4 != 0) {
    FUN_01562e20(lVar4);
    (**(code **)(**(long **)(param_1 + 0x68) + 0x18))
              (*(long **)(param_1 + 0x68),lVar4,*(undefined8 *)(param_1 + 0x70),
               *(undefined8 *)(param_1 + 0x78));
  }
  *(long **)(param_1 + 0x68) = plVar6;
  *(undefined8 *)(param_1 + 0x70) = 0xc;
  pcVar5 = *(code **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x78) = 4;
  if (pcVar5 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    (*pcVar5)(param_1 + 0xa0);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,param_1 + 0xa0);
    uVar3 = *param_2;
    uVar1 = param_2[1];
    uVar2 = param_2[3];
    *(undefined8 *)(param_1 + 0x90) = param_2[2];
    *(undefined8 *)(param_1 + 0x98) = uVar2;
    *(undefined8 *)(param_1 + 0x80) = uVar3;
    *(undefined8 *)(param_1 + 0x88) = uVar1;
  }
  return;
}


