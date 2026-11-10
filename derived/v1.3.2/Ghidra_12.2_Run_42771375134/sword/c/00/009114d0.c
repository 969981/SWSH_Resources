/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009114d0; name: FUN_009114d0
 */


void FUN_009114d0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  uVar1 = FUN_008fbae0(*(undefined8 *)(param_1 + 0x60));
  if ((((uVar1 & 1) != 0) &&
      (uVar1 = FUN_008f7fd0(*(undefined8 *)(param_1 + 0x60)), (uVar1 & 1) != 0)) &&
     (uVar1 = FUN_008f9360(*(undefined8 *)(param_1 + 0x60)), (uVar1 & 1) == 0)) {
    uVar2 = FUN_00931a00(*(undefined8 *)(param_1 + 0x68));
    local_34 = FUN_00914660(uVar2,0);
    local_34 = local_34 & 0xffff;
    uVar2 = FUN_00931a00(*(undefined8 *)(param_1 + 0x68));
    local_30 = FUN_00914660(uVar2,1);
    local_30 = local_30 & 0xffff;
    uVar2 = FUN_00931a00(*(undefined8 *)(param_1 + 0x68));
    local_2c = FUN_00914660(uVar2,2);
    local_2c = local_2c & 0xffff;
    uVar2 = FUN_00931a00(*(undefined8 *)(param_1 + 0x68));
    local_28 = FUN_00914660(uVar2,3);
    local_28 = local_28 & 0xffff;
    uVar2 = FUN_00931a00(*(undefined8 *)(param_1 + 0x68));
    local_24 = FUN_00914660(uVar2,4);
    local_24 = local_24 & 0xffff;
    FUN_008fbaf0(*(undefined8 *)(param_1 + 0x60),&local_34,5);
  }
  return;
}


