/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e15e0; name: FUN_001e15e0
 */


void FUN_001e15e0(long param_1,long param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  lVar5 = *(long *)(param_1 + 8);
  if ((lVar5 != 0) && (uVar4 = *(uint *)(lVar5 + 0x50), uVar4 != 0)) {
    lVar6 = *(long *)(lVar5 + 0x48);
    uVar8 = 0;
    plVar7 = (long *)(lVar6 + 8);
    do {
      pcVar1 = (char *)(lVar6 + uVar8 * 0x10);
      if (*pcVar1 == '\x01') {
        if (*plVar7 != 0) {
          if (param_2 != 0) {
            *plVar7 = param_2;
            return;
          }
          *(uint *)(lVar5 + 0x50) = uVar4 - 1;
          puVar2 = (undefined8 *)(lVar6 + (ulong)(uVar4 - 1) * 0x10);
          *(undefined8 *)(pcVar1 + 8) = puVar2[1];
          *(undefined8 *)pcVar1 = *puVar2;
          if (*(int *)(*(long *)(param_1 + 8) + 0x50) == 0) {
            if (-1 < *(int *)(*(long *)(param_1 + 8) + 0x54)) {
              FUN_001b9ad0(*(undefined8 *)PTR_DAT_02711048);
            }
            *(undefined8 *)(param_1 + 8) = 0;
          }
          return;
        }
        break;
      }
      uVar3 = (int)uVar8 + 1;
      uVar8 = (ulong)uVar3;
      plVar7 = plVar7 + 2;
    } while (uVar3 < uVar4);
  }
  FUN_001e1290(param_1,1,param_2,"NpActor::setAggregate() failed");
  return;
}


