/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01215af0; name: FUN_01215af0
 */


void FUN_01215af0(long *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = *param_1;
  puVar2 = (undefined4 *)param_1[1];
  uVar6 = *param_2;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar6;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  *param_4 = *puVar2;
  *(undefined1 *)(param_4 + 4) = 0;
  *(undefined1 *)(param_4 + 6) = 0;
  *(undefined1 *)(param_4 + 10) = 0;
  *(undefined1 *)(param_4 + 0x13) = 0;
  *(undefined1 *)(param_4 + 0x18) = 0;
  *(undefined1 *)(param_4 + 0x27) = 0;
  *(undefined1 *)(param_4 + 0x3c) = 0;
  *(undefined1 *)(param_4 + 0x6c) = 0;
  *(undefined1 *)(param_4 + 0x80) = 0;
  *(undefined1 *)(param_4 + 0x8c) = 0;
  *(undefined1 *)(param_4 + 0x8e) = 0;
  param_4[0x94] = 0;
  *(undefined8 *)(param_4 + 0x92) = 0;
  *(undefined8 *)(param_4 + 0x90) = 0;
  if (*(char *)(lVar1 + 0x120) != '\0') {
    *(undefined8 *)(param_4 + 0x82) = *(undefined8 *)(lVar1 + 0x128);
    uVar4 = *(undefined8 *)(lVar1 + 0x138);
    uVar6 = *(undefined8 *)(lVar1 + 0x140);
    uVar5 = *(undefined8 *)(lVar1 + 0x148);
    *(undefined8 *)(param_4 + 0x84) = *(undefined8 *)(lVar1 + 0x130);
    *(undefined8 *)(param_4 + 0x8a) = uVar5;
    *(undefined8 *)(param_4 + 0x88) = uVar6;
    *(undefined8 *)(param_4 + 0x86) = uVar4;
    *(undefined1 *)(param_4 + 0x80) = 1;
  }
  if (*(char *)(lVar1 + 0xc0) != '\0') {
    uVar6 = *(undefined8 *)(lVar1 + 0xc4);
    *(undefined8 *)(param_4 + 0x6f) = *(undefined8 *)(lVar1 + 0xcc);
    *(undefined8 *)(param_4 + 0x6d) = uVar6;
    uVar5 = *(undefined8 *)(lVar1 + 0xe4);
    uVar6 = *(undefined8 *)(lVar1 + 0xd4);
    uVar4 = *(undefined8 *)(lVar1 + 0xdc);
    *(undefined8 *)(param_4 + 0x77) = *(undefined8 *)(lVar1 + 0xec);
    *(undefined8 *)(param_4 + 0x75) = uVar5;
    *(undefined8 *)(param_4 + 0x73) = uVar4;
    *(undefined8 *)(param_4 + 0x71) = uVar6;
    uVar5 = *(undefined8 *)(lVar1 + 0x104);
    uVar6 = *(undefined8 *)(lVar1 + 0xf4);
    uVar4 = *(undefined8 *)(lVar1 + 0xfc);
    param_4[0x7f] = *(undefined4 *)(lVar1 + 0x10c);
    *(undefined8 *)(param_4 + 0x7d) = uVar5;
    *(undefined8 *)(param_4 + 0x79) = uVar6;
    *(undefined8 *)(param_4 + 0x7b) = uVar4;
    *(undefined1 *)(param_4 + 0x6c) = 1;
  }
  FUN_012156b0(param_4 + 4,lVar1);
  FUN_01225e20(param_4);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return;
}


