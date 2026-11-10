/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00563090; name: FUN_00563090
 */


int FUN_00563090(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined4 local_60 [2];
  undefined8 local_58;
  
  if ((DAT_027605d0 & 1) == 0) {
    DAT_027605d0 = 1;
    DAT_02760968 = &DAT_01d38550;
    DAT_02760970 = "_REINHARDRGB_RGB";
    DAT_02760978 = "_REINHARDRGB_RGBFAST";
    DAT_02760980 = "_RGB_REINHARDRGB";
    DAT_02760988 = "_REINHARDRGBLUM_RGB";
    DAT_02760990 = "_REINHARDRGBLUM_RGBFAST";
    DAT_02760998 = "_RGB_REINHARDRGBLUM";
    DAT_027609a0 = "_LOGRGB_RGB";
    DAT_027609a8 = "_LOGRGB_RGBFAST";
    DAT_027609b0 = "_RGB_LOGRGB";
    DAT_027609b8 = "_LOGRGBLUM_RGB";
    DAT_027609c0 = "_LOGRGBLUM_RGBFAST";
    DAT_027609c8 = "_RGB_LOGRGBLUM";
    DAT_027609d0 = "_RGBALUM_RGB";
    DAT_027609d8 = "_RGBALUM_RGBFAST";
    DAT_027609e0 = "_RGB_RGBALUM";
    DAT_027609e8 = "_REINHARDRGB_REINHARDRGB";
    DAT_027609f0 = "_REINHARDRGBLUM_REINHARDRGBLUM";
    DAT_027609f8 = "_LOGRGB_LOGRGB";
    DAT_02760a00 = "_LOGRGBLUM_LOGRGBLUM";
    DAT_02760a08 = "_RGBALUM_RGBALUM";
    DAT_02760a10 = "_ALPHA_RGB";
  }
  FUN_00550fe0(local_60,param_3);
  lVar4 = 0;
  iVar3 = 0;
  do {
    while( true ) {
      FUN_005515e0(local_60,local_60[0]);
      FUN_00551930(local_60,(&DAT_02760968)[lVar4]);
      iVar2 = (**(code **)(*(long *)*param_1 + 0x78))((long *)*param_1,local_58);
      iVar1 = iVar3;
      if (iVar2 == 0) {
        iVar1 = -1;
      }
      *(int *)(param_2 + lVar4 * 4) = iVar2;
      if (iVar2 == 0) break;
      iVar2 = (**(code **)(*(long *)*param_1 + 0xe0))((long *)*param_1,iVar2);
      if (iVar2 < 0) {
        *(undefined4 *)(param_2 + lVar4 * 4) = 0;
      }
      else if ((*(int *)(param_2 + lVar4 * 4) != 0) &&
              (iVar3 = (**(code **)(*(long *)*param_1 + 0xd8))(), -1 < iVar3)) {
        iVar3 = iVar1;
      }
      lVar4 = lVar4 + 1;
      if (lVar4 == 0x16) goto LAB_005632a8;
    }
    iVar3 = -1;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x16);
LAB_005632a8:
  FUN_00551380(local_60);
  return iVar3;
}


