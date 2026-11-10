/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00969510; name: FUN_00969510
 */


void FUN_00969510(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  long lStack_60;
  undefined4 *local_58;
  
  uVar3 = FUN_00880a00(*param_3,3);
  if ((uVar3 & 1) != 0) {
    FUN_0093b2e0(param_5);
    lVar4 = FUN_0093b2f0(param_5);
    if (lVar4 != 0) {
      do {
        uVar3 = FUN_00969620(param_1,param_2,lVar4,param_3,param_4);
        if ((uVar3 & 1) != 0) {
          uVar2 = FUN_0093b420(param_5);
          uVar1 = param_3[9];
          FUN_0093b260(param_5,lVar4);
          lVar5 = FUN_00942400(param_1);
          if ((((uint)(1 < uVar2) & (uVar1 & 8) >> 3) == 0) && (*(char *)(lVar5 + 0x34) == '\0')) {
            local_68 = param_2;
            lStack_60 = lVar4;
            local_58 = param_3;
            FUN_00942450(param_1);
            uVar6 = FUN_00925990();
            FUN_009524a0(uVar6,auStack_70,&local_68);
          }
          lVar4 = FUN_00942400(param_1);
          *(undefined1 *)(lVar4 + 0x34) = 0;
        }
        lVar4 = FUN_0093b2f0(param_5);
      } while (lVar4 != 0);
    }
  }
  return;
}


