/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ff4d0; name: thunk_FUN_003ff4d8
 */


int thunk_FUN_003ff4d8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  do {
    iVar2 = *param_1;
    iVar1 = param_2;
    if (param_2 <= iVar2) {
      iVar1 = iVar2;
    }
    while (*param_1 == iVar2) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar4) {
        *param_1 = iVar1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        return *param_1;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}


