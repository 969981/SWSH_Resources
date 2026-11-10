/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00546cf0; name: FUN_00546cf0
 */


char * FUN_00546cf0(uint param_1,ulong param_2,char *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 uVar4;
  size_t sVar5;
  
  bVar3 = false;
  DAT_0275dc30 = 0;
  if ((param_1 & 1) != 0) {
    sVar5 = strlen(&DAT_0275dc30);
    uVar4 = s_GPUUSAGE_RENDERTARGET_01d40991._0_8_;
    pcVar1 = &DAT_0275dc30 + sVar5;
    if ((param_2 & 1) == 0) {
      uVar2 = CONCAT26(s_GPUUSAGE_RENDERTARGET_01d40991._14_2_,
                       s_GPUUSAGE_RENDERTARGET_01d40991._8_6_);
      *(ulong *)(&DAT_0275dc3e + sVar5) =
           CONCAT62(s_GPUUSAGE_RENDERTARGET_01d40991._16_6_,s_GPUUSAGE_RENDERTARGET_01d40991._14_2_)
      ;
      *(undefined8 *)pcVar1 = uVar4;
      *(undefined8 *)(&DAT_0275dc38 + sVar5) = uVar2;
      bVar3 = true;
    }
    else {
      (&DAT_0275dc32)[sVar5] = 0;
      pcVar1[0] = 'R';
      pcVar1[1] = 'T';
      bVar3 = true;
    }
  }
  if ((param_1 >> 1 & 1) != 0) {
    sVar5 = strlen(&DAT_0275dc30);
    if ((param_2 & 1) == 0) {
      pcVar1 = " | %s";
      if (!bVar3) {
        pcVar1 = "%s";
      }
      sprintf(&DAT_0275dc30 + sVar5,pcVar1,"GPUUSAGE_DEPTHSTENCIL");
    }
    else {
      pcVar1 = "|%s";
      if (!bVar3) {
        pcVar1 = "%s";
      }
      sprintf(&DAT_0275dc30 + sVar5,pcVar1,&DAT_01d43e1e);
    }
  }
  if (param_3 == (char *)0x0) {
    param_3 = &DAT_0275dc30;
  }
  else {
    strcpy(param_3,&DAT_0275dc30);
  }
  return param_3;
}


