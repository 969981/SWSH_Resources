/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01216540; name: FUN_01216540
 */


void FUN_01216540(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,char *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = uVar4;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  *param_2 = *param_3;
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  *(undefined1 *)(param_2 + 10) = 0;
  *(undefined1 *)(param_2 + 0x13) = 0;
  *(undefined1 *)(param_2 + 0x18) = 0;
  *(undefined1 *)(param_2 + 0x27) = 0;
  *(undefined1 *)(param_2 + 0x3c) = 0;
  *(undefined1 *)(param_2 + 0x6c) = 0;
  *(undefined1 *)(param_2 + 0x80) = 0;
  *(undefined1 *)(param_2 + 0x8c) = 0;
  *(undefined1 *)(param_2 + 0x8e) = 0;
  param_2[0x94] = 0;
  *(undefined8 *)(param_2 + 0x92) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  if (param_4[0x120] != '\0') {
    *(undefined8 *)(param_2 + 0x82) = *(undefined8 *)(param_4 + 0x128);
    uVar2 = *(undefined8 *)(param_4 + 0x138);
    uVar4 = *(undefined8 *)(param_4 + 0x140);
    uVar3 = *(undefined8 *)(param_4 + 0x148);
    *(undefined8 *)(param_2 + 0x84) = *(undefined8 *)(param_4 + 0x130);
    *(undefined8 *)(param_2 + 0x8a) = uVar3;
    *(undefined8 *)(param_2 + 0x88) = uVar4;
    *(undefined8 *)(param_2 + 0x86) = uVar2;
    *(undefined1 *)(param_2 + 0x80) = 1;
  }
  if (param_4[0xc0] != '\0') {
    uVar4 = *(undefined8 *)(param_4 + 0xc4);
    *(undefined8 *)(param_2 + 0x6f) = *(undefined8 *)(param_4 + 0xcc);
    *(undefined8 *)(param_2 + 0x6d) = uVar4;
    uVar3 = *(undefined8 *)(param_4 + 0xe4);
    uVar4 = *(undefined8 *)(param_4 + 0xd4);
    uVar2 = *(undefined8 *)(param_4 + 0xdc);
    *(undefined8 *)(param_2 + 0x77) = *(undefined8 *)(param_4 + 0xec);
    *(undefined8 *)(param_2 + 0x75) = uVar3;
    *(undefined8 *)(param_2 + 0x73) = uVar2;
    *(undefined8 *)(param_2 + 0x71) = uVar4;
    uVar3 = *(undefined8 *)(param_4 + 0x104);
    uVar4 = *(undefined8 *)(param_4 + 0xf4);
    uVar2 = *(undefined8 *)(param_4 + 0xfc);
    param_2[0x7f] = *(undefined4 *)(param_4 + 0x10c);
    *(undefined8 *)(param_2 + 0x7d) = uVar3;
    *(undefined8 *)(param_2 + 0x79) = uVar4;
    *(undefined8 *)(param_2 + 0x7b) = uVar2;
    *(undefined1 *)(param_2 + 0x6c) = 1;
  }
  if (*param_4 != '\0') {
    memcpy(param_2 + 0x40,param_4 + 0x10,0xb0);
    *(undefined1 *)(param_2 + 0x3c) = 1;
  }
  FUN_01225e20(param_2);
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  return;
}


