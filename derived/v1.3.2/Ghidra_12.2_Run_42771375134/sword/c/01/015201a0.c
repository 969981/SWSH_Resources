/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015201a0; name: FUN_015201a0
 */


/* WARNING: Type propagation algorithm not settling */

uint * FUN_015201a0(long param_1,uint param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  
  param_2 = param_2 & 0xffff;
  uVar1 = FUN_00888c50(param_2,0xe);
  switch(uVar1) {
  case 0:
    uVar3 = 0x3c;
    lVar4 = *(long *)(param_1 + 0x1358);
    break;
  case 1:
    uVar3 = 0x1e;
    lVar4 = *(long *)(param_1 + 0x1360);
    break;
  case 2:
    uVar3 = 0x14;
    lVar4 = *(long *)(param_1 + 0x1368);
    break;
  case 3:
    uVar3 = 0x50;
    lVar4 = *(long *)(param_1 + 0x1370);
    break;
  case 4:
    uVar3 = 0x226;
    lVar4 = *(long *)(param_1 + 0x1378);
    break;
  case 5:
    uVar3 = 0xd2;
    lVar4 = *(long *)(param_1 + 0x1380);
    break;
  case 6:
    uVar3 = 100;
    lVar4 = *(long *)(param_1 + 5000);
    break;
  case 7:
    uVar3 = 100;
    lVar4 = *(long *)(param_1 + 0x1390);
    break;
  case 8:
    uVar3 = 0x40;
    lVar4 = *(long *)(param_1 + 0x1398);
    break;
  default:
    return (uint *)0x0;
  }
  if (lVar4 == 0) {
    return (uint *)0x0;
  }
  uVar5 = 0;
  puVar2 = (uint *)(lVar4 + 4);
  while( true ) {
    if ((puVar2[-1] & 0x7fff) == param_2) {
      return (uint *)(lVar4 + (ulong)uVar5 * 4);
    }
    if ((*puVar2 & 0x7fff) == param_2) break;
    uVar5 = uVar5 + 2;
    puVar2 = puVar2 + 2;
    if (uVar3 <= uVar5) {
      return (uint *)0x0;
    }
  }
  return puVar2;
}


