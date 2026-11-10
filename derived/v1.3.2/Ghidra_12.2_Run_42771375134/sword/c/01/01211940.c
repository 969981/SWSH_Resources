/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01211940; name: FUN_01211940
 */


void FUN_01211940(undefined4 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x580));
  *param_1 = *(undefined4 *)(param_2 + 0x310);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 800);
  *(undefined1 *)(param_1 + 6) = 0;
  if (*(char *)(param_2 + 0x328) != '\0') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x330);
    *(undefined1 *)(param_1 + 6) = 1;
  }
  *(undefined1 *)(param_1 + 10) = 0;
  if (*(char *)(param_2 + 0x338) != '\0') {
    uVar2 = *(undefined8 *)(param_2 + 0x342);
    uVar3 = *(undefined8 *)(param_2 + 0x34a);
    uVar4 = *(undefined8 *)(param_2 + 0x352);
    *(undefined8 *)((long)param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x33a);
    *(undefined8 *)((long)param_1 + 0x42) = uVar4;
    *(undefined8 *)((long)param_1 + 0x3a) = uVar3;
    *(undefined8 *)((long)param_1 + 0x32) = uVar2;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  *(undefined1 *)(param_1 + 0x13) = 0;
  if (*(char *)(param_2 + 0x35c) != '\0') {
    uVar2 = *(undefined8 *)(param_2 + 0x368);
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x360);
    *(undefined8 *)(param_1 + 0x16) = uVar2;
    *(undefined1 *)(param_1 + 0x13) = 1;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (*(char *)(param_2 + 0x370) != '\0') {
    uVar2 = *(undefined8 *)(param_2 + 0x374);
    uVar3 = *(undefined8 *)(param_2 + 0x37c);
    *(undefined8 *)(param_1 + 0x1d) = *(undefined8 *)(param_2 + 900);
    *(undefined8 *)(param_1 + 0x1b) = uVar3;
    *(undefined8 *)(param_1 + 0x19) = uVar2;
    uVar3 = *(undefined8 *)(param_2 + 0x38c);
    uVar4 = *(undefined8 *)(param_2 + 0x394);
    uVar2 = *(undefined8 *)(param_2 + 0x39c);
    *(undefined8 *)(param_1 + 0x25) = *(undefined8 *)(param_2 + 0x3a4);
    *(undefined8 *)(param_1 + 0x23) = uVar2;
    *(undefined8 *)(param_1 + 0x21) = uVar4;
    *(undefined8 *)(param_1 + 0x1f) = uVar3;
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  *(undefined1 *)(param_1 + 0x27) = 0;
  if (*(char *)(param_2 + 0x3ac) != '\0') {
    *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x3b0);
    *(undefined1 *)(param_1 + 0x29) = 0;
    if (*(char *)(param_2 + 0x3b4) != '\0') {
      uVar2 = *(undefined8 *)(param_2 + 0x3c0);
      uVar3 = *(undefined8 *)(param_2 + 0x3c8);
      uVar1 = *(undefined4 *)(param_2 + 0x3d0);
      *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x3b8);
      param_1[0x30] = uVar1;
      *(undefined8 *)(param_1 + 0x2c) = uVar2;
      *(undefined8 *)(param_1 + 0x2e) = uVar3;
      *(undefined1 *)(param_1 + 0x29) = 1;
    }
    *(undefined8 *)(param_1 + 0x31) = *(undefined8 *)(param_2 + 0x3d4);
    uVar2 = *(undefined8 *)(param_2 + 0x3dc);
    uVar3 = *(undefined8 *)(param_2 + 0x3e4);
    uVar4 = *(undefined8 *)(param_2 + 0x3ec);
    *(undefined8 *)((long)param_1 + 0xe1) = *(undefined8 *)(param_2 + 0x3f1);
    *(undefined8 *)(param_1 + 0x37) = uVar4;
    *(undefined8 *)(param_1 + 0x35) = uVar3;
    *(undefined8 *)(param_1 + 0x33) = uVar2;
    *(undefined1 *)(param_1 + 0x27) = 1;
  }
  *(undefined1 *)(param_1 + 0x3c) = 0;
  if (*(char *)(param_2 + 0x400) != '\0') {
    memcpy(param_1 + 0x40,(void *)(param_2 + 0x410),0xb0);
    *(undefined1 *)(param_1 + 0x3c) = 1;
  }
  *(undefined1 *)(param_1 + 0x6c) = 0;
  if (*(char *)(param_2 + 0x4c0) != '\0') {
    uVar2 = *(undefined8 *)(param_2 + 0x4c4);
    *(undefined8 *)(param_1 + 0x6f) = *(undefined8 *)(param_2 + 0x4cc);
    *(undefined8 *)(param_1 + 0x6d) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x4dc);
    uVar3 = *(undefined8 *)(param_2 + 0x4e4);
    uVar4 = *(undefined8 *)(param_2 + 0x4d4);
    *(undefined8 *)(param_1 + 0x77) = *(undefined8 *)(param_2 + 0x4ec);
    *(undefined8 *)(param_1 + 0x75) = uVar3;
    *(undefined8 *)(param_1 + 0x73) = uVar2;
    *(undefined8 *)(param_1 + 0x71) = uVar4;
    uVar2 = *(undefined8 *)(param_2 + 0x4f4);
    uVar4 = *(undefined8 *)(param_2 + 0x504);
    uVar3 = *(undefined8 *)(param_2 + 0x4fc);
    param_1[0x7f] = *(undefined4 *)(param_2 + 0x50c);
    *(undefined8 *)(param_1 + 0x7d) = uVar4;
    *(undefined8 *)(param_1 + 0x79) = uVar2;
    *(undefined8 *)(param_1 + 0x7b) = uVar3;
    *(undefined1 *)(param_1 + 0x6c) = 1;
  }
  *(undefined1 *)(param_1 + 0x80) = 0;
  if (*(char *)(param_2 + 0x510) != '\0') {
    *(undefined8 *)(param_1 + 0x82) = *(undefined8 *)(param_2 + 0x518);
    uVar2 = *(undefined8 *)(param_2 + 0x528);
    uVar3 = *(undefined8 *)(param_2 + 0x530);
    uVar4 = *(undefined8 *)(param_2 + 0x538);
    *(undefined8 *)(param_1 + 0x84) = *(undefined8 *)(param_2 + 0x520);
    *(undefined8 *)(param_1 + 0x8a) = uVar4;
    *(undefined8 *)(param_1 + 0x88) = uVar3;
    *(undefined8 *)(param_1 + 0x86) = uVar2;
    *(undefined1 *)(param_1 + 0x80) = 1;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x548);
  uVar1 = *(undefined4 *)(param_2 + 0x560);
  *(undefined8 *)(param_1 + 0x92) = *(undefined8 *)(param_2 + 0x558);
  *(undefined8 *)(param_1 + 0x8e) = uVar2;
  *(undefined8 *)(param_1 + 0x8c) = *(undefined8 *)(param_2 + 0x540);
  uVar2 = *(undefined8 *)(param_2 + 0x550);
  param_1[0x94] = uVar1;
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x580));
  return;
}


