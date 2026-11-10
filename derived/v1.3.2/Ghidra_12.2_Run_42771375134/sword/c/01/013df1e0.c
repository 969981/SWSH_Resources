/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013df1e0; name: FUN_013df1e0
 */


void FUN_013df1e0(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  lVar5 = (**(code **)(*param_2 + 0x10))(param_2,0x150,0x10);
  if (lVar5 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_0070ef90(lVar5,0x7f00);
  *(long **)(lVar5 + 8) = param_2;
  *(long *)(lVar5 + 0x10) = lVar5;
  *(undefined8 *)(lVar5 + 0x18) = 0x150;
  *(undefined8 *)(lVar5 + 0x20) = 0x10;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  *param_1 = lVar5;
  if (lVar5 != 0) {
    lVar4 = *(long *)(lVar5 + 0x58);
    if (*(long *)(lVar4 + 0x58) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar4 + 0x60))();
      *(undefined8 *)(lVar4 + 0x58) = uVar6;
    }
    piVar1 = (int *)(lVar4 + 0x54);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


