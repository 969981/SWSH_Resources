/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc0310; name: FUN_00dc0310
 */


void FUN_00dc0310(undefined8 *param_1,long param_2,long param_3,char *param_4,size_t param_5)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  char *pcVar7;
  char local_c0 [128];
  
  pcVar5 = local_c0;
  pcVar7 = *(char **)(param_3 + 8);
  pcVar2 = strstr(pcVar7,"/unit_obj/");
  if ((pcVar2 == (char *)0x0) && (pcVar2 = strstr(pcVar7,"/battlebg_obj/"), pcVar2 == (char *)0x0))
  {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  pcVar2 = strrchr(pcVar7,0x2f);
  lVar3 = 0;
  do {
    lVar4 = lVar3;
    lVar3 = lVar4 + -1;
  } while (pcVar2[lVar4 + -1] != '/');
  if (lVar4 != 0) {
    pcVar7 = local_c0;
    do {
      pcVar1 = pcVar2 + lVar4;
      lVar4 = lVar4 + 1;
      pcVar5 = pcVar7 + 1;
      *pcVar7 = *pcVar1;
      pcVar7 = pcVar5;
    } while (lVar4 != 0);
  }
  *pcVar5 = '\0';
  snprintf(param_4,param_5,"%s%s.gfpak","bin/archive/field/model/",local_c0);
  plVar6 = *(long **)(param_2 + 8);
  lVar3 = (**(code **)(*plVar6 + 0x10))(plVar6,0x1b0,0x10);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar4 + 0x80) < 0x10) {
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar6;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
                    /* WARNING: Subroutine does not return */
    memset((void *)(lVar3 + 0x40),0,0x170);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


