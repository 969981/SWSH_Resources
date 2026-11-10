/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0070ee60; name: FUN_0070ee60
 */


long FUN_0070ee60(undefined8 param_1,long *param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long local_38;
  
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
  FUN_0070ef90(lVar5,*param_3);
  *(long **)(lVar5 + 8) = param_2;
  *(long *)(lVar5 + 0x10) = lVar5;
  *(undefined8 *)(lVar5 + 0x18) = 0x150;
  *(undefined8 *)(lVar5 + 0x20) = 0x10;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
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
  local_38 = lVar5;
  FUN_006d9640(param_1,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return lVar5;
}


