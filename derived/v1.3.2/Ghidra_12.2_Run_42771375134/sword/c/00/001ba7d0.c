/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001ba7d0; name: FUN_001ba7d0
 */


void FUN_001ba7d0(long param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 8) >> 0x18 & 0xf;
  switch(uVar1) {
  case 1:
  case 2:
    uVar3 = *(undefined8 *)(param_1 + -0x20);
    plVar2 = (long *)(param_1 + -0x30);
    if ((*(byte *)(param_1 + -0x26) & 1) != 0) {
      lVar4 = *(long *)PTR_DAT_02711048;
      FUN_003ff570(*(undefined8 *)(lVar4 + 0xae0));
      (**(code **)(*plVar2 + 0x18))(plVar2);
      *(int *)(lVar4 + 0xacc) = *(int *)(lVar4 + 0xacc) + -1;
      *plVar2 = *(long *)(lVar4 + 0xad8);
      *(long **)(lVar4 + 0xad8) = plVar2;
                    /* try { // try from 001ba858 to 001ba85b has its CatchHandler @ 001bac88 */
      FUN_003ff5a0(*(undefined8 *)(lVar4 + 0xae0));
      goto LAB_001bab84;
    }
    break;
  case 3:
    uVar3 = *(undefined8 *)(param_1 + -0x50);
    plVar2 = (long *)(param_1 + -0x60);
    if ((*(byte *)(param_1 + -0x56) & 1) != 0) {
      lVar4 = *(long *)PTR_DAT_02711048;
      FUN_003ff570(*(undefined8 *)(lVar4 + 0x660));
      (**(code **)(*plVar2 + 0x18))(plVar2);
      *(int *)(lVar4 + 0x64c) = *(int *)(lVar4 + 0x64c) + -1;
      *plVar2 = *(long *)(lVar4 + 0x658);
      *(long **)(lVar4 + 0x658) = plVar2;
                    /* try { // try from 001ba8b0 to 001ba8b3 has its CatchHandler @ 001bac84 */
      FUN_003ff5a0(*(undefined8 *)(lVar4 + 0x660));
      goto LAB_001bab84;
    }
    break;
  case 4:
    uVar3 = *(undefined8 *)(param_1 + -0x50);
    plVar2 = (long *)(param_1 + -0x60);
    if ((*(byte *)(param_1 + -0x56) & 1) != 0) {
      lVar4 = *(long *)PTR_DAT_02711048;
      FUN_003ff570(*(undefined8 *)(lVar4 + 0x1620));
      (**(code **)(*plVar2 + 0x18))(plVar2);
      *(int *)(lVar4 + 0x160c) = *(int *)(lVar4 + 0x160c) + -1;
      *plVar2 = *(long *)(lVar4 + 0x1618);
      *(long **)(lVar4 + 0x1618) = plVar2;
                    /* try { // try from 001ba908 to 001ba90b has its CatchHandler @ 001bac80 */
      FUN_003ff5a0(*(undefined8 *)(lVar4 + 0x1620));
      goto LAB_001bab84;
    }
    break;
  case 5:
    uVar3 = *(undefined8 *)(param_1 + -0x50);
    plVar2 = (long *)(param_1 + -0x60);
    if ((*(byte *)(param_1 + -0x56) & 1) != 0) {
      lVar4 = *(long *)PTR_DAT_02711048;
      FUN_003ff570(*(undefined8 *)(lVar4 + 0x8a0));
      (**(code **)(*plVar2 + 0x18))(plVar2);
      *(int *)(lVar4 + 0x88c) = *(int *)(lVar4 + 0x88c) + -1;
      *plVar2 = *(long *)(lVar4 + 0x898);
      *(long **)(lVar4 + 0x898) = plVar2;
                    /* try { // try from 001ba960 to 001ba963 has its CatchHandler @ 001bac7c */
      FUN_003ff5a0(*(undefined8 *)(lVar4 + 0x8a0));
      goto LAB_001bab84;
    }
    break;
  case 6:
    plVar2 = (long *)(param_1 + -0x20);
    if ((*(byte *)(param_1 + -0x16) & 1) != 0) {
      lVar4 = *(long *)PTR_DAT_02711048;
      FUN_003ff570(*(undefined8 *)(lVar4 + 0xf60));
      (**(code **)(*plVar2 + 0x18))(plVar2);
      *(int *)(lVar4 + 0xf4c) = *(int *)(lVar4 + 0xf4c) + -1;
      *plVar2 = *(long *)(lVar4 + 0xf58);
      *(long **)(lVar4 + 0xf58) = plVar2;
                    /* try { // try from 001ba9b4 to 001ba9b7 has its CatchHandler @ 001bac78 */
      FUN_003ff5a0(*(undefined8 *)(lVar4 + 0xf60));
      goto LAB_001babf0;
    }
    goto LAB_001baafc;
  case 7:
    plVar2 = (long *)(param_1 + -0x28);
    if (*(char *)(*(long *)(PTR_DAT_02711068 + (ulong)uVar1 * 8 + 0x30) + param_1 + 0xd) == '\x02')
    {
      uVar3 = *(undefined8 *)(param_1 + -0x18);
      if ((*(byte *)(param_1 + -0x1e) & 1) != 0) {
        lVar4 = *(long *)PTR_DAT_02711048;
        FUN_003ff570(*(undefined8 *)(lVar4 + 0x1aa0));
        (**(code **)(*plVar2 + 0x18))(plVar2);
        *(int *)(lVar4 + 0x1a8c) = *(int *)(lVar4 + 0x1a8c) + -1;
        *plVar2 = *(long *)(lVar4 + 0x1a98);
        *(long **)(lVar4 + 0x1a98) = plVar2;
                    /* try { // try from 001baae8 to 001baaeb has its CatchHandler @ 001bac64 */
        FUN_003ff5a0(*(undefined8 *)(lVar4 + 0x1aa0));
        goto LAB_001bab84;
      }
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + -0x18);
      if ((*(byte *)(param_1 + -0x1e) & 1) != 0) {
        lVar4 = *(long *)PTR_DAT_02711048;
        FUN_003ff570(*(undefined8 *)(lVar4 + 0x1ce0));
        (**(code **)(*plVar2 + 0x18))(plVar2);
        *(int *)(lVar4 + 0x1ccc) = *(int *)(lVar4 + 0x1ccc) + -1;
        *plVar2 = *(long *)(lVar4 + 0x1cd8);
        *(long **)(lVar4 + 0x1cd8) = plVar2;
                    /* try { // try from 001bac58 to 001bac5b has its CatchHandler @ 001bac60 */
        FUN_003ff5a0(*(undefined8 *)(lVar4 + 0x1ce0));
        goto LAB_001bab84;
      }
    }
    break;
  case 8:
    uVar3 = *(undefined8 *)(param_1 + -8);
    plVar2 = (long *)(param_1 + -0x18);
    if ((*(byte *)(param_1 + -0xe) & 1) != 0) {
      lVar4 = *(long *)PTR_DAT_02711048;
      FUN_003ff570(*(undefined8 *)(lVar4 + 0x13e0));
      (**(code **)(*plVar2 + 0x18))(plVar2);
      *(int *)(lVar4 + 0x13cc) = *(int *)(lVar4 + 0x13cc) + -1;
      *plVar2 = *(long *)(lVar4 + 0x13d8);
      *(long **)(lVar4 + 0x13d8) = plVar2;
                    /* try { // try from 001baa0c to 001baa0f has its CatchHandler @ 001bac74 */
      FUN_003ff5a0(*(undefined8 *)(lVar4 + 0x13e0));
      goto LAB_001bab84;
    }
    break;
  case 9:
    plVar2 = (long *)(param_1 + -0x10);
    if ((*(byte *)(param_1 + -6) & 1) != 0) {
      lVar4 = *(long *)PTR_DAT_02711048;
      FUN_003ff570(*(undefined8 *)(lVar4 + 0x1860));
      (**(code **)(*plVar2 + 0x18))(plVar2);
      *(int *)(lVar4 + 0x184c) = *(int *)(lVar4 + 0x184c) + -1;
      *plVar2 = *(long *)(lVar4 + 0x1858);
      *(long **)(lVar4 + 0x1858) = plVar2;
                    /* try { // try from 001babec to 001babef has its CatchHandler @ 001bac68 */
      FUN_003ff5a0(*(undefined8 *)(lVar4 + 0x1860));
      goto LAB_001babf0;
    }
    goto LAB_001baafc;
  case 10:
    plVar2 = (long *)(param_1 + -0x10);
    if ((*(byte *)(param_1 + -6) & 1) != 0) {
      lVar4 = *(long *)PTR_DAT_02711048;
      FUN_003ff570(*(undefined8 *)(lVar4 + 0xd20));
      (**(code **)(*plVar2 + 0x18))(plVar2);
      *(int *)(lVar4 + 0xd0c) = *(int *)(lVar4 + 0xd0c) + -1;
      *plVar2 = *(long *)(lVar4 + 0xd18);
      *(long **)(lVar4 + 0xd18) = plVar2;
                    /* try { // try from 001baa60 to 001baa63 has its CatchHandler @ 001bac70 */
      FUN_003ff5a0(*(undefined8 *)(lVar4 + 0xd20));
      goto LAB_001babf0;
    }
LAB_001baafc:
    (**(code **)(*plVar2 + 0x18))(plVar2);
LAB_001babf0:
    FUN_001b3ed0(*(undefined8 *)PTR_DAT_02711040,plVar2,0,2);
    return;
  case 0xb:
    uVar3 = *(undefined8 *)(param_1 + -0x18);
    plVar2 = (long *)(param_1 + -0x28);
    if ((*(byte *)(param_1 + -0x1e) & 1) != 0) {
      lVar4 = *(long *)PTR_DAT_02711048;
      FUN_003ff570(*(undefined8 *)(lVar4 + 0x1f30));
      (**(code **)(*plVar2 + 0x18))(plVar2);
      *(int *)(lVar4 + 0x1f1c) = *(int *)(lVar4 + 0x1f1c) + -1;
      *plVar2 = *(long *)(lVar4 + 0x1f28);
      *(long **)(lVar4 + 0x1f28) = plVar2;
                    /* try { // try from 001bab60 to 001bab63 has its CatchHandler @ 001bac6c */
      FUN_003ff5a0(*(undefined8 *)(lVar4 + 0x1f30));
      goto LAB_001bab84;
    }
    break;
  default:
    return;
  }
  (**(code **)(*plVar2 + 0x18))(plVar2);
LAB_001bab84:
  FUN_001b3ed0(*(undefined8 *)PTR_DAT_02711040,plVar2,uVar3,2);
  return;
}


