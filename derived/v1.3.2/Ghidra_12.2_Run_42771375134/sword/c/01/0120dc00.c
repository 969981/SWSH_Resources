/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0120dc00; name: FUN_0120dc00
 */


void FUN_0120dc00(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  int local_70 [4];
  int local_60 [4];
  undefined1 auStack_50 [12];
  undefined2 local_44;
  
  puVar1 = PTR_DAT_02726070;
  uVar5 = *(undefined8 *)PTR_DAT_027104a0;
  uVar4 = 0;
  param_1 = param_1 + 0xdf8;
  do {
    lVar2 = FUN_007a8430(uVar5,uVar4 & 0xffffffff);
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x4c) & 0xff0000) != 0x20000)) {
      local_44 = *(undefined2 *)puVar1;
      FUN_01956390(local_60,lVar2,auStack_50);
      if (local_60[0] == 0) {
        uVar3 = FUN_01953e90(auStack_50);
        FUN_01955fe0(local_70,lVar2,param_1,0xd80,uVar3);
        if (local_70[0] == 0) {
          uVar3 = FUN_01953e90(auStack_50);
          *(undefined8 *)(param_1 + 0xd80) = uVar3;
          *(undefined1 *)(param_1 + 0xd88) = 0;
        }
      }
    }
    param_1 = param_1 + 0xd90;
    uVar4 = uVar4 + 1;
  } while (uVar4 != 8);
  return;
}


