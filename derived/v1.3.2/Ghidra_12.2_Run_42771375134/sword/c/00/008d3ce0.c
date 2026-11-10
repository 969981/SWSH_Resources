/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d3ce0; name: FUN_008d3ce0
 */


void FUN_008d3ce0(long *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 uVar6;
  long lVar7;
  Language *pLVar8;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38 [2];
  undefined8 local_28;
  
  puVar1 = PTR_DAT_02710a18;
  pLVar8 = (Language *)&local_70;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar1 = PTR_DAT_02717bc0;
  if (lVar4 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    if (*(long *)(lVar4 + 0x80) != 0) {
      lVar7 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    }
  }
  param_1[1] = lVar7;
  *puVar1 = 1;
  puVar1 = PTR_DAT_02717bc8 + 0x40;
  *param_1 = (long)(PTR_DAT_02717bc8 + 0x10);
  param_1[9] = (long)puVar1;
  local_60 = DAT_02146fe0;
  uStack_58 = DAT_02146fe8;
  local_70 = DAT_02146fd0;
  uStack_68 = DAT_02146fd8;
  local_38[0] = DAT_02147008;
  local_40 = DAT_02147000;
  local_50 = DAT_02146ff0;
  uStack_48 = DAT_02146ff8;
  local_28 = nn::oe::GetDesiredLanguage();
  uVar5 = nn::settings::operator==((LanguageCode *)&local_28,(Language *)&local_70);
  if ((uVar5 & 1) == 0) {
    pLVar8 = (Language *)((ulong)&local_70 | 4);
    uVar5 = nn::settings::operator==((LanguageCode *)&local_28,pLVar8);
    if ((uVar5 & 1) != 0) goto LAB_008d3ef4;
    pLVar8 = (Language *)&uStack_68;
    uVar5 = nn::settings::operator==((LanguageCode *)&local_28,pLVar8);
    if ((uVar5 & 1) != 0) goto LAB_008d3ef4;
    pLVar8 = (Language *)((long)&uStack_68 + 4);
    uVar5 = nn::settings::operator==((LanguageCode *)&local_28,pLVar8);
    if ((uVar5 & 1) != 0) goto LAB_008d3ef4;
    pLVar8 = (Language *)&local_60;
    uVar5 = nn::settings::operator==((LanguageCode *)&local_28,pLVar8);
    if ((uVar5 & 1) != 0) goto LAB_008d3ef4;
    pLVar8 = (Language *)((long)&local_60 + 4);
    uVar5 = nn::settings::operator==((LanguageCode *)&local_28,pLVar8);
    if ((uVar5 & 1) != 0) goto LAB_008d3ef4;
    pLVar8 = (Language *)&uStack_58;
    uVar5 = nn::settings::operator==((LanguageCode *)&local_28,pLVar8);
    if ((uVar5 & 1) != 0) goto LAB_008d3ef4;
    pLVar8 = (Language *)((long)&uStack_58 + 4);
    uVar5 = nn::settings::operator==((LanguageCode *)&local_28,pLVar8);
    if ((uVar5 & 1) != 0) goto LAB_008d3ef4;
    pLVar8 = (Language *)&local_50;
    uVar5 = nn::settings::operator==((LanguageCode *)&local_28,pLVar8);
    if ((uVar5 & 1) != 0) goto LAB_008d3ef4;
    pLVar8 = (Language *)((long)&local_50 + 4);
    uVar5 = nn::settings::operator==((LanguageCode *)&local_28,pLVar8);
    if ((uVar5 & 1) != 0) goto LAB_008d3ef4;
    pLVar8 = (Language *)&uStack_48;
    uVar5 = nn::settings::operator==((LanguageCode *)&local_28,pLVar8);
    if ((uVar5 & 1) != 0) goto LAB_008d3ef4;
    pLVar8 = (Language *)((long)&uStack_48 + 4);
    uVar5 = nn::settings::operator==((LanguageCode *)&local_28,pLVar8);
    if ((uVar5 & 1) != 0) goto LAB_008d3ef4;
    pLVar8 = (Language *)&local_40;
    uVar5 = nn::settings::operator==((LanguageCode *)&local_28,pLVar8);
    if ((uVar5 & 1) != 0) goto LAB_008d3ef4;
    pLVar8 = (Language *)((long)&local_40 + 4);
    uVar5 = nn::settings::operator==((LanguageCode *)&local_28,pLVar8);
    if ((uVar5 & 1) != 0) goto LAB_008d3ef4;
    pLVar8 = (Language *)local_38;
    uVar5 = nn::settings::operator==((LanguageCode *)&local_28,pLVar8);
    if ((uVar5 & 1) != 0) goto LAB_008d3ef4;
switchD_008d3f18_caseD_0:
    uVar6 = 1;
    uVar3 = 0;
  }
  else {
LAB_008d3ef4:
    uVar2 = *(undefined4 *)pLVar8;
    uVar6 = 2;
    uVar3 = 2;
    switch(uVar2) {
    case 0:
      goto switchD_008d3f18_caseD_0;
    case 1:
    case 6:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      break;
    case 2:
    case 0xd:
      uVar6 = 3;
      uVar3 = 3;
      break;
    case 3:
      uVar6 = 5;
      uVar3 = 5;
      break;
    case 4:
      uVar6 = 4;
      uVar3 = uVar2;
      break;
    case 5:
    case 0xe:
      uVar6 = 7;
      uVar3 = 6;
      break;
    case 7:
      uVar6 = 8;
      uVar3 = uVar2;
      break;
    case 0xf:
      uVar6 = 9;
      uVar3 = 8;
      break;
    case 0x10:
      uVar6 = 10;
      uVar3 = 9;
      break;
    default:
      uVar3 = 2;
    }
  }
  *(undefined1 *)(param_1 + 10) = uVar6;
  FUN_014bfd10(uVar3);
  return;
}


