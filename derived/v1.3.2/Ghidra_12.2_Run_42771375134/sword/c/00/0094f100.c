/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094f100; name: FUN_0094f100
 */


void FUN_0094f100(undefined8 param_1,byte *param_2,char *param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_2 = 0;
  uVar2 = FUN_009426f0();
  if (((uVar2 & 1) == 0) || (uVar2 = FUN_00942710(param_1), (uVar2 & 1) == 0)) {
    if (*param_3 == '\x1f') {
      uVar4 = 0;
      uVar2 = FUN_0094f1e0(param_1,param_3);
    }
    else {
      uVar4 = FUN_009424e0(param_1);
      uVar2 = FUN_0094f1e0(param_1,param_3);
    }
    if ((uVar2 & 1) != 0) {
      uVar3 = FUN_009423b0(param_1);
      FUN_00938970(uVar3,uVar4,*(undefined4 *)(param_3 + 0x18));
      bVar1 = FUN_0094f2b0(param_1,param_3);
      *param_2 = bVar1 & 1;
      uVar3 = FUN_009423b0(param_1);
      FUN_009389e0(uVar3,uVar4);
      return;
    }
    bVar1 = FUN_0094f2b0(param_1,param_3);
    *param_2 = bVar1 & 1;
  }
  return;
}


