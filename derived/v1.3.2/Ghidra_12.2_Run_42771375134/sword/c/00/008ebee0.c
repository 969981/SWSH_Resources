/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ebee0; name: FUN_008ebee0
 */


ulong FUN_008ebee0(ulong param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  switch(param_2) {
  case 0:
    goto switchD_008ebefc_caseD_0;
  case 1:
    return param_1 >> 6 & 0x3ffffff;
  case 2:
    return (ulong)(uVar1 >> 5);
  case 3:
    return (ulong)(uVar1 >> 4);
  case 4:
    return (ulong)(uVar1 >> 3);
  case 5:
    return (ulong)(uVar1 >> 2);
  case 6:
    return (ulong)(uVar1 >> 1);
  default:
    param_2 = uVar1;
switchD_008ebefc_caseD_0:
    return (ulong)param_2;
  case 8:
    return (ulong)(uVar1 << 1);
  case 9:
    return (ulong)(uVar1 << 2);
  case 10:
    return (ulong)(uVar1 << 3);
  case 0xb:
    return (ulong)(uVar1 << 4);
  case 0xc:
    return (ulong)(uVar1 << 5);
  case 0xd:
    return (ulong)(uVar1 << 6);
  }
}


