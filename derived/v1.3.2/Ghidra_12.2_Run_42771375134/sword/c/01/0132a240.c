/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0132a240; name: FUN_0132a240
 */


char FUN_0132a240(long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  
  lVar2 = *param_1;
  lVar5 = param_1[8];
  if (((lVar5 == lVar2) || (param_1[10] == lVar2)) || (param_1[0xc] == lVar2)) {
    lVar3 = 0;
    lVar2 = param_1[2];
  }
  else {
    lVar3 = 0;
    if (param_1[0xe] != lVar2) {
      lVar3 = lVar2;
    }
    lVar2 = param_1[2];
  }
  if (((lVar5 == lVar2) || (param_1[10] == lVar2)) || (param_1[0xc] == lVar2)) {
    lVar6 = 0;
    lVar2 = param_1[4];
  }
  else {
    lVar6 = 0;
    if (param_1[0xe] != lVar2) {
      lVar6 = lVar2;
    }
    lVar2 = param_1[4];
  }
  if (((lVar5 == lVar2) || (param_1[10] == lVar2)) || (param_1[0xc] == lVar2)) {
    lVar7 = 0;
    lVar2 = param_1[6];
  }
  else {
    lVar7 = 0;
    if (param_1[0xe] != lVar2) {
      lVar7 = lVar2;
    }
    lVar2 = param_1[6];
  }
  if (((lVar5 == lVar2) || (param_1[10] == lVar2)) || (param_1[0xc] == lVar2)) {
    bVar4 = false;
  }
  else {
    bVar4 = lVar2 != 0 && param_1[0xe] != lVar2;
  }
  cVar8 = '\x02';
  if (lVar6 == 0) {
    cVar8 = '\x01';
  }
  cVar1 = lVar6 != 0;
  if (lVar3 != 0) {
    cVar1 = cVar8;
  }
  if (lVar7 != 0) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1 + bVar4;
}


