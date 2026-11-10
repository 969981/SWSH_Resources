/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009697e0; name: FUN_009697e0
 */


void FUN_009697e0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  undefined2 local_48;
  byte local_46;
  char local_38 [8];
  
  FUN_0093b2e0(param_3[2]);
  lVar2 = FUN_0093b2f0(param_3[2]);
  if (lVar2 != 0) {
    do {
      if ((*(char *)((long)param_3 + 0x22) == '\0') ||
         (uVar3 = FUN_009427a0(param_1,param_3[1],lVar2), (uVar3 & 1) == 0)) {
        lVar5 = *param_3;
        uVar1 = FUN_0093b420(param_3[2]);
        local_68 = *param_3;
        lStack_60 = param_3[1];
        lStack_50 = param_3[3];
        local_48 = (undefined2)param_3[4];
        local_46 = (*(byte *)(lVar5 + 0x24) >> 3 ^ 0xff) & 1 | uVar1 < 2;
        local_58 = lVar2;
        FUN_00942450(param_1);
        uVar4 = FUN_00925150();
        FUN_00969990(uVar4,local_38,&local_68);
        if (local_38[0] != '\0') {
          FUN_0093b260(param_3[2],lVar2);
        }
      }
      lVar2 = FUN_0093b2f0(param_3[2]);
    } while (lVar2 != 0);
  }
  return;
}


