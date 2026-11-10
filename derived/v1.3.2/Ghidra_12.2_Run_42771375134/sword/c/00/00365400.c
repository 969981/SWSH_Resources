/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00365400; name: FUN_00365400
 */


undefined8 FUN_00365400(long *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *local_130 [32];
  
  local_130[0] = (byte *)0x0;
  if ((char)param_1[9] != '\0') {
    plVar2 = (long *)param_1[5];
    iVar1 = *(int *)(*param_1 + 0x10);
    if (iVar1 == 0) {
      uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,"bad__repx__name",local_130);
      pbVar5 = local_130[0];
    }
    else {
      uVar3 = (**(code **)(*plVar2 + 0x10))
                        (plVar2,*(undefined8 *)(*(long *)(*param_1 + 8) + (ulong)(iVar1 - 1) * 0x10)
                         ,local_130);
      pbVar5 = local_130[0];
    }
    if ((((uVar3 & 1) != 0) && (pbVar5 != (byte *)0x0)) &&
       (uVar4 = (uint)*pbVar5, local_130[0] = pbVar5, *pbVar5 != 0)) {
      do {
        iVar1 = isspace(uVar4);
        if (iVar1 == 0) break;
        pbVar5 = pbVar5 + 1;
        uVar4 = (uint)*pbVar5;
      } while (uVar4 != 0);
                    /* WARNING: Subroutine does not return */
      memset(local_130,0,0x100);
    }
  }
  return 0;
}


