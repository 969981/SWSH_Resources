/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c8f260; name: FUN_00c8f260
 */


void FUN_00c8f260(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)(param_1 + 0x1d8);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    if (cVar1 != '\x01') {
      return;
    }
    uVar2 = 1;
  }
  *(undefined4 *)(param_1 + 0x2dc) = uVar2;
  *(char *)(param_1 + 0x2e0) = cVar1;
  *(undefined4 *)(param_1 + 0x2e1) = 0x1900;
  *(undefined4 *)(param_1 + 0x2e8) = uVar2;
  *(char *)(param_1 + 0x2ec) = cVar1;
  *(undefined4 *)(param_1 + 0x2ed) = 0x1011901;
  *(undefined4 *)(param_1 + 0x2f4) = uVar2;
  *(char *)(param_1 + 0x2f8) = cVar1;
  *(undefined4 *)(param_1 + 0x2f9) = 0x2021902;
  *(undefined4 *)(param_1 + 0x300) = uVar2;
  *(char *)(param_1 + 0x304) = cVar1;
  *(undefined4 *)(param_1 + 0x305) = 0x3031903;
  *(undefined4 *)(param_1 + 0x30c) = uVar2;
  *(char *)(param_1 + 0x310) = cVar1;
  *(undefined4 *)(param_1 + 0x311) = 0x4041904;
  *(undefined1 *)(param_1 + 0x31d) = 5;
  *(undefined2 *)(param_1 + 0x31e) = 0x519;
  *(undefined1 *)(param_1 + 800) = 5;
  *(undefined4 *)(param_1 + 0x318) = uVar2;
  *(char *)(param_1 + 0x31c) = cVar1;
  *(undefined4 *)(param_1 + 0x324) = uVar2;
  *(char *)(param_1 + 0x328) = cVar1;
  *(undefined4 *)(param_1 + 0x329) = 0x6061906;
  *(undefined4 *)(param_1 + 0x330) = uVar2;
  *(char *)(param_1 + 0x334) = cVar1;
  *(undefined4 *)(param_1 + 0x335) = 0x7071907;
  *(undefined4 *)(param_1 + 0x33c) = uVar2;
  *(char *)(param_1 + 0x340) = cVar1;
  *(undefined4 *)(param_1 + 0x341) = 0x8081908;
  *(undefined4 *)(param_1 + 0x348) = uVar2;
  *(char *)(param_1 + 0x34c) = cVar1;
  *(undefined4 *)(param_1 + 0x34d) = 0x9091909;
  *(undefined4 *)(param_1 + 0x354) = uVar2;
  *(char *)(param_1 + 0x358) = cVar1;
  *(undefined2 *)(param_1 + 0x359) = 0x190a;
  *(undefined2 *)(param_1 + 0x35b) = 0xa0a;
  *(undefined4 *)(param_1 + 0x360) = uVar2;
  *(char *)(param_1 + 0x364) = cVar1;
  *(undefined4 *)(param_1 + 0x365) = 0xb0b190b;
  *(undefined4 *)(param_1 + 0x36c) = uVar2;
  *(char *)(param_1 + 0x370) = cVar1;
  *(undefined4 *)(param_1 + 0x371) = 0xc0c190c;
  *(undefined4 *)(param_1 + 0x378) = uVar2;
  *(char *)(param_1 + 0x37c) = cVar1;
  *(undefined4 *)(param_1 + 0x37d) = 0xd0d190d;
  *(undefined4 *)(param_1 + 900) = uVar2;
  *(char *)(param_1 + 0x388) = cVar1;
  *(undefined4 *)(param_1 + 0x389) = 0xe0e190e;
  *(undefined4 *)(param_1 + 0x390) = uVar2;
  *(char *)(param_1 + 0x394) = cVar1;
  *(undefined2 *)(param_1 + 0x395) = 0x1915;
  *(undefined1 *)(param_1 + 0x397) = 0xf;
  *(undefined1 *)(param_1 + 0x398) = 0xf;
  *(undefined1 *)(param_1 + 0x2d8) = 1;
  return;
}


