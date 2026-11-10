/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0096a620; name: FUN_0096a620
 */


void FUN_0096a620(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = FUN_0093b420(param_3[3]);
  FUN_0096a6a0(param_1,*param_3,param_3[1],param_3[2],param_3[3]);
  if ((1 < uVar1) && (uVar2 = FUN_0093b4e0(param_3[3]), (uVar2 & 1) != 0)) {
    FUN_009423b0(param_1);
    FUN_009366b0();
    lVar3 = FUN_00942400(param_1);
    *(undefined1 *)(lVar3 + 0x34) = 1;
  }
  return;
}


