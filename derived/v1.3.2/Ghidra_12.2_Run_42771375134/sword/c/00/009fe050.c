/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009fe050; name: FUN_009fe050
 */


char * FUN_009fe050(char *param_1,long *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  int param3;
  long *plVar5;
  ulong local_40 [2];
  
  if ((param_1 != (char *)0x0) && (*param_2 != 0)) {
    lVar4 = *(long *)(*param_2 + 0x180);
    if (lVar4 == 0) {
      param3 = 0;
    }
    else {
      param3 = *(int *)(lVar4 + 0x1100);
    }
    lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
    if (lVar4 == 0) {
      uVar1 = FUN_01524c00(0);
    }
    else {
      plVar5 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      uVar1 = FUN_01524c00(lVar4);
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
    local_40[1] = 0;
    switch(uVar1) {
    default:
      uVar3 = 0x616a;
      break;
    case 2:
      uVar3 = 0x6e65;
      break;
    case 3:
      uVar3 = 0x7266;
      break;
    case 4:
      uVar3 = 0x7469;
      break;
    case 5:
      uVar3 = 0x6564;
      break;
    case 7:
      uVar3 = 0x7365;
      break;
    case 8:
      uVar3 = 0x6f6b;
      break;
    case 9:
      uVar3 = 0x6373;
      break;
    case 10:
      uVar3 = 0x6374;
    }
    local_40[0] = (ulong)uVar3;
    uVar2 = snprintf(param_1,0x100,"https://battle.pokemon-home.com/regulation/%09d/%s",param3,
                     (char *)local_40);
    param_1 = (char *)(ulong)uVar2;
  }
  return param_1;
}


