/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00917fb0; name: FUN_00917fb0
 */


ulong FUN_00917fb0(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((param_2 & 0xffff) < 0xbe) {
    uVar1 = *param_1;
    uVar3 = (ulong)uVar1;
    local_30 = 0;
    uStack_28 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    FUN_00916c20(param_1,param_2,(&DAT_0214a848)[(ulong)param_2 & 0xffff],&local_60);
    iVar2 = (int)(uVar3 & 0xffff);
    uVar1 = *param_1 - uVar1;
    *(undefined1 *)((long)param_1 + (uVar3 & 0xffff) + 8) = 0;
    *(undefined1 *)((long)param_1 + (ulong)(iVar2 + 1) + 8) = 0xbf;
    *(char *)((long)param_1 + (ulong)(iVar2 + 2) + 8) = (char)uVar1 + -3;
    *param_1 = iVar2 + (uVar1 & 0xff);
  }
  else {
    uVar3 = 0xffff;
  }
  return uVar3;
}


