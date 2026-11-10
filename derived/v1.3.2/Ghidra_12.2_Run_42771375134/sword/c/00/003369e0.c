/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003369e0; name: FUN_003369e0
 */


void FUN_003369e0(undefined8 param_1,ulong *param_2,char **param_3)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined **ppuVar8;
  char acStack_240 [512];
  
  if ((byte *)*param_3 != (byte *)0x0) {
    iVar2 = isspace((uint)(byte)**param_3);
    while (iVar2 != 0) {
      pcVar5 = *param_3;
      *param_3 = pcVar5 + 1;
      iVar2 = isspace((uint)(byte)pcVar5[1]);
    }
    if ((byte *)*param_3 != (byte *)0x0) {
      bVar1 = **param_3;
      uVar4 = (uint)bVar1;
      pcVar5 = acStack_240;
      if (bVar1 != 0) {
        pcVar7 = acStack_240;
        do {
          iVar2 = isspace(uVar4);
          pcVar5 = pcVar7;
          if ((acStack_240 + 0x1ff <= pcVar7) || (iVar2 != 0)) break;
          pcVar6 = *param_3;
          *param_3 = pcVar6 + 1;
          pcVar5 = pcVar7 + 1;
          *pcVar7 = *pcVar6;
          uVar4 = (uint)(byte)**param_3;
          pcVar7 = pcVar5;
        } while (uVar4 != 0);
      }
      *pcVar5 = '\0';
    }
  }
  if (PTR_s_eVERTICAL_025e7418 != (undefined *)0x0) {
    pcVar5 = PTR_s_eVERTICAL_025e7418;
    ppuVar8 = &PTR_s_eHORIZONTAL_025e7428;
    do {
      while (iVar2 = strcasecmp(acStack_240,pcVar5), iVar2 != 0) {
        pcVar5 = *ppuVar8;
        ppuVar8 = ppuVar8 + 2;
        if (pcVar5 == (char *)0x0) goto LAB_00336ac0;
      }
      *param_2 = (ulong)*(uint *)(ppuVar8 + -1);
      pcVar5 = *ppuVar8;
      ppuVar8 = ppuVar8 + 2;
    } while (pcVar5 != (char *)0x0);
  }
LAB_00336ac0:
  uVar3 = strtoul(*param_3,param_3,10);
  *(int *)((long)param_2 + 4) = (int)uVar3;
  return;
}


