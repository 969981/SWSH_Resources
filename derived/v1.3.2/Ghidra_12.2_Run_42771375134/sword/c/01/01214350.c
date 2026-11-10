/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01214350; name: FUN_01214350
 */


void FUN_01214350(long *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

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
  if (*(char *)(lVar1 + 0x1e0) != '\0') {
    *(undefined8 *)(param_4 + 0x82) = *(undefined8 *)(lVar1 + 0x1e8);
    uVar4 = *(undefined8 *)(lVar1 + 0x200);
    uVar6 = *(undefined8 *)(lVar1 + 0x1f8);
    uVar5 = *(undefined8 *)(lVar1 + 0x208);
    *(undefined8 *)(param_4 + 0x84) = *(undefined8 *)(lVar1 + 0x1f0);
    *(undefined8 *)(param_4 + 0x8a) = uVar5;
    *(undefined8 *)(param_4 + 0x88) = uVar4;
    *(undefined8 *)(param_4 + 0x86) = uVar6;
    *(undefined1 *)(param_4 + 0x80) = 1;
  }
  if (*(char *)(lVar1 + 400) != '\0') {
    uVar6 = *(undefined8 *)(lVar1 + 0x194);
    *(undefined8 *)(param_4 + 0x6f) = *(undefined8 *)(lVar1 + 0x19c);
    *(undefined8 *)(param_4 + 0x6d) = uVar6;
    uVar6 = *(undefined8 *)(lVar1 + 0x1ac);
    uVar4 = *(undefined8 *)(lVar1 + 0x1b4);
    uVar5 = *(undefined8 *)(lVar1 + 0x1a4);
    *(undefined8 *)(param_4 + 0x77) = *(undefined8 *)(lVar1 + 0x1bc);
    *(undefined8 *)(param_4 + 0x75) = uVar4;
    *(undefined8 *)(param_4 + 0x73) = uVar6;
    *(undefined8 *)(param_4 + 0x71) = uVar5;
    uVar6 = *(undefined8 *)(lVar1 + 0x1c4);
    uVar5 = *(undefined8 *)(lVar1 + 0x1d4);
    uVar4 = *(undefined8 *)(lVar1 + 0x1cc);
    param_4[0x7f] = *(undefined4 *)(lVar1 + 0x1dc);
    *(undefined8 *)(param_4 + 0x7d) = uVar5;
    *(undefined8 *)(param_4 + 0x79) = uVar6;
    *(undefined8 *)(param_4 + 0x7b) = uVar4;
    *(undefined1 *)(param_4 + 0x6c) = 1;
  }
  if (*(char *)(lVar1 + 0xd0) != '\0') {
    memcpy(param_4 + 0x40,(void *)(lVar1 + 0xe0),0xb0);
    *(undefined1 *)(param_4 + 0x3c) = 1;
  }
  FUN_01213f00(param_4 + 4,lVar1);
  FUN_01225e20(param_4);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return;
}


