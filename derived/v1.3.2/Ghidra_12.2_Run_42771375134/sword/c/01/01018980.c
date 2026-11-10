/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01018980; name: FUN_01018980
 */


bool FUN_01018980(long param_1)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  char acStack_50 [16];
  
  if (3 < *(uint *)(param_1 + 0x50)) {
    return false;
  }
  bVar2 = true;
  switch(*(uint *)(param_1 + 0x50)) {
  case 1:
    FUN_010186d0(param_1);
    bVar2 = *(int *)(param_1 + 0x50) == 0;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x50) = 3;
  case 3:
    uVar1 = *(uint *)(param_1 + 0x2c0);
    if (uVar1 != 0) {
      uVar4 = 0;
      lVar5 = param_1;
      do {
        uVar4 = uVar4 + 1;
        snprintf(acStack_50,0x10,"aoc%x",(uint)uVar4);
        nn::fs::Unmount(acStack_50);
        *(undefined4 *)(lVar5 + 0x60) = 0;
        if (*(long *)(lVar5 + 0x78) == 0) {
          *(undefined8 *)(lVar5 + 0x78) = 0;
        }
        else {
          FUN_006e2100(*(long *)(lVar5 + 0x78),lVar5 + 0x70);
          lVar3 = *(long *)(lVar5 + 0x78);
          *(undefined8 *)(lVar5 + 0x78) = 0;
          if (lVar3 != 0) {
            (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
          }
        }
        *(undefined1 *)(lVar5 + 0x180) = 0;
        lVar5 = lVar5 + 0x130;
        *(undefined4 *)(param_1 + 0x2c0) = 0;
      } while (uVar1 != uVar4);
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    bVar2 = true;
  }
  return bVar2;
}


