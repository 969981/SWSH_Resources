/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fe0f30; name: FUN_00fe0f30
 */


void FUN_00fe0f30(undefined8 *param_1,long *param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x850,0x10);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  puVar1 = PTR_DAT_02723140;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  lVar4 = *param_3;
  lVar5 = *param_4;
  *(undefined1 *)(plVar2 + 4) = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = lVar4;
  plVar2[2] = lVar5;
  plVar2[3] = 0;
  FUN_012b4040(plVar2 + 5);
  FUN_0168ad10(plVar2 + 8);
  plVar2[8] = (long)(PTR_DAT_02723148 + 0x10);
  FUN_0168ad10(plVar2 + 0x82);
  puVar1 = PTR_DAT_02723150;
  *(undefined4 *)((long)plVar2 + 0x7d4) = 0;
  *(undefined1 *)(plVar2 + 0xfb) = 1;
  plVar2[0x82] = (long)(puVar1 + 0x10);
  *(undefined8 *)((long)plVar2 + 0x7dc) = 0x3f8000003f800000;
  *(undefined8 *)((long)plVar2 + 0x7e4) = 0;
  plVar2[0x109] = 0;
  plVar2[0x108] = 0;
  plVar2[0x107] = 0;
  plVar2[0x106] = 0;
  plVar2[0x105] = 0;
  plVar2[0x104] = 0;
  plVar2[0x103] = 0;
  plVar2[0x102] = 0;
  plVar2[0x101] = 0;
  plVar2[0x100] = 0;
  plVar2[0xff] = 0;
  plVar2[0xfe] = 0;
  *param_1 = plVar2;
  param_1[1] = param_2;
  param_1[2] = 0x850;
  param_1[3] = 0x10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return;
}


