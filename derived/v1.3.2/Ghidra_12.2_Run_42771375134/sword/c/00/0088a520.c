/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0088a520; name: FUN_0088a520
 */


void FUN_0088a520(long param_1,undefined8 *param_2,code *param_3)

{
  bool bVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  
  uVar2 = FUN_008787f0(*param_2);
  lVar7 = 0;
  bVar1 = true;
  switch(uVar2) {
  case 0x121:
    lVar7 = 1;
    bVar1 = true;
    break;
  case 0x122:
    bVar1 = true;
    lVar7 = 2;
    break;
  case 0x123:
    bVar1 = true;
    lVar7 = 3;
    break;
  case 0x124:
    bVar1 = true;
    lVar7 = 4;
    break;
  case 0x125:
    bVar1 = true;
    lVar7 = 5;
    break;
  case 0x126:
    break;
  default:
    lVar7 = 0;
    bVar1 = false;
  }
  sVar3 = FUN_008787f0(param_2[1]);
  if ((ushort)(sVar3 - 0x121U) < 6) {
    lVar6 = *(long *)(&DAT_02144860 + (long)(short)(sVar3 - 0x121U) * 8);
    if ((!bVar1) || (iVar4 = (*param_3)(2), iVar4 != 0)) {
      puVar5 = (undefined1 *)(param_1 + lVar6 + 0x6e);
      goto LAB_0088a608;
    }
  }
  else if (!bVar1) {
    return;
  }
  puVar5 = (undefined1 *)(param_1 + lVar7 + 0x68);
LAB_0088a608:
  *puVar5 = 1;
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
  return;
}


