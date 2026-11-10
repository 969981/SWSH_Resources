/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0096a3d0; name: FUN_0096a3d0
 */


void FUN_0096a3d0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_0096a440(param_1,*param_3,param_3[1],param_3[2]);
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_00942400(param_1);
    if (*(char *)(lVar2 + 0x34) == '\0') {
      lVar2 = FUN_00942400(param_1);
      if (*(char *)(lVar2 + 0x35) != '\0') {
        uVar3 = FUN_009423b0(param_1);
        FUN_00936020(uVar3,0x55);
        return;
      }
    }
  }
  return;
}


