#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float numeroA1, numeroB1, numeroC1, numeroD1, numeroA2, numeroB2, numeroC2, numeroD2, numeroA3, numeroB3, numeroC3, numeroD3, numeroA4, numeroB4, numeroC4, numeroD4, numeroA5, numeroB5, numeroC5, numeroD5;
	
	printf("Você irá inserir os valores correspondentes ao grupo 01!");
	printf("\nInsira o primeiro valor:");
	scanf("%f",&numeroA1);
	printf("Insira o segundo valor:");
	scanf("%f",&numeroB1);
	printf("Insira o terceiro valor:");
	scanf("%f",&numeroC1);
	printf("Insira o quarto valor:");
	scanf("%f",&numeroD1);
	printf("A ordem de inserção dos valores deste grupo foi: %.2f; %.2f; %.2f; %.2f.", numeroA1, numeroB1, numeroC1, numeroD1);
	
	if(numeroA1 > numeroB1 && numeroB1 > numeroC1 && numeroC1 > numeroD1)
	{
		printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA1, numeroB1, numeroC1, numeroD1);
	}
		else if(numeroA1 > numeroB1 && numeroB1 > numeroD1 && numeroD1 > numeroC1)
		{
			printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA1, numeroB1, numeroD1, numeroC1);
		}
			else if(numeroA1 > numeroC1 && numeroC1 > numeroB1 && numeroB1 > numeroD1)
			{
				printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA1, numeroC1, numeroB1, numeroD1);
			}
				else if(numeroA1 > numeroC1 && numeroC1 > numeroD1 && numeroD1 > numeroB1)
				{
					printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA1, numeroC1, numeroD1, numeroB1);
				}
					else if(numeroA1 > numeroD1 && numeroD1 > numeroB1 && numeroB1 > numeroC1)
					{
						printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA1, numeroD1, numeroB1, numeroC1);
					}
						else if(numeroA1 > numeroD1 && numeroD1 > numeroC1 && numeroC1 > numeroB1)
						{
							printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA1, numeroD1, numeroC1, numeroB1);
						}
							else if(numeroB1 > numeroA1 && numeroA1 > numeroC1 && numeroC1 > numeroD1)
							{
								printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB1, numeroA1, numeroC1, numeroD1);
							}
								else if(numeroB1 > numeroA1 && numeroA1 > numeroD1 && numeroD1 > numeroC1)
								{
									printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB1, numeroA1, numeroD1, numeroC1);
								}
									else if(numeroB1 > numeroC1 && numeroC1 > numeroA1 && numeroA1 > numeroD1)
									{
										printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB1, numeroC1, numeroA1, numeroD1);
									}
										else if(numeroB1 > numeroC1 && numeroC1 > numeroD1 && numeroD1 > numeroA1)
										{
											printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB1, numeroC1, numeroD1, numeroA1);
										}
											else if(numeroB1 > numeroD1 && numeroD1 > numeroA1 && numeroA1 > numeroC1)
											{
												printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB1, numeroD1, numeroA1, numeroC1);
											}
												else if(numeroB1 > numeroD1 && numeroD1 > numeroC1 && numeroC1 > numeroA1)
												{
													printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB1, numeroD1, numeroC1, numeroA1);
												}
													else if(numeroC1 > numeroA1 && numeroA1 > numeroB1 && numeroB1 > numeroD1)
													{
														printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC1, numeroA1, numeroB1, numeroD1);
													}
														else if(numeroC1 > numeroA1 && numeroA1 > numeroD1 && numeroD1 > numeroB1)
														{
															printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC1, numeroA1, numeroD1, numeroB1);
														}
															else if(numeroC1 > numeroB1 && numeroB1 > numeroA1 && numeroA1 > numeroD1)
															{
																printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC1, numeroB1, numeroA1, numeroD1);
															}
																else if(numeroC1 > numeroB1 && numeroB1 > numeroD1 && numeroD1 > numeroA1)
																{
																	printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC1, numeroB1, numeroD1, numeroA1);
																}
																	else if(numeroC1 > numeroD1 && numeroD1 > numeroA1 && numeroA1 > numeroB1)
																	{
																		printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC1, numeroD1, numeroA1, numeroB1);
																	}
																		else if(numeroC1 > numeroD1 && numeroD1 > numeroB1 && numeroB1 > numeroA1)
																		{
																			printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC1, numeroD1, numeroB1, numeroA1);
																		}
																			else if(numeroD1 > numeroA1 && numeroA1 > numeroB1 && numeroB1 > numeroC1)
																			{
																				printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD1, numeroA1, numeroB1, numeroC1);
																			}
																				else if(numeroD1 > numeroA1 && numeroA1 > numeroC1 && numeroC1 > numeroB1)
																				{
																					printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD1, numeroA1, numeroC1, numeroB1);
																				}
																					else if(numeroD1 > numeroB1 && numeroB1 > numeroA1 && numeroA1 > numeroC1)
																					{
																						printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD1, numeroB1, numeroA1, numeroC1);
																					}
																						else if(numeroD1 > numeroB1 && numeroB1 > numeroC1 && numeroC1 > numeroA1)
																						{
																							printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD1, numeroB1, numeroC1, numeroA1);
																						}
																							else if(numeroD1 > numeroC1 && numeroC1 > numeroA1 && numeroA1 > numeroB1)
																							{
																								printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD1, numeroC1, numeroA1, numeroB1);
																							}
																								else if(numeroD1 > numeroC1 && numeroC1 > numeroB1 && numeroB1 > numeroA1)
																								{
																									printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD1, numeroC1, numeroB1, numeroA1);
																								}

	if(numeroA1 < numeroB1 && numeroB1 < numeroC1 && numeroC1 < numeroD1)
	{
		printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA1, numeroB1, numeroC1, numeroD1);
	}
		else if(numeroA1 < numeroB1 && numeroB1 < numeroD1 && numeroD1 < numeroC1)
		{
			printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA1, numeroB1, numeroD1, numeroC1);
		}
			else if(numeroA1 < numeroC1 && numeroC1 < numeroB1 && numeroB1 < numeroD1)
			{
				printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA1, numeroC1, numeroB1, numeroD1);
			}
				else if(numeroA1 < numeroC1 && numeroC1 < numeroD1 && numeroD1 < numeroB1)
				{
					printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA1, numeroC1, numeroD1, numeroB1);
				}
					else if(numeroA1 < numeroD1 && numeroD1 < numeroB1 && numeroB1 < numeroC1)
					{
						printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA1, numeroD1, numeroB1, numeroC1);
					}
						else if(numeroA1 < numeroD1 && numeroD1 < numeroC1 && numeroC1 < numeroB1)
						{
							printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA1, numeroD1, numeroC1, numeroB1);
						}
							else if(numeroB1 < numeroA1 && numeroA1 < numeroC1 && numeroC1 < numeroD1)
							{
								printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB1, numeroA1, numeroC1, numeroD1);
							}
								else if(numeroB1 < numeroA1 && numeroA1 < numeroD1 && numeroD1 < numeroC1)
								{
									printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB1, numeroA1, numeroD1, numeroC1);
								}
									else if(numeroB1 < numeroC1 && numeroC1 < numeroA1 && numeroA1 < numeroD1)
									{
										printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB1, numeroC1, numeroA1, numeroD1);
									}
										else if(numeroB1 < numeroC1 && numeroC1 < numeroD1 && numeroD1 < numeroA1)
										{
											printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB1, numeroC1, numeroD1, numeroA1);
										}
											else if(numeroB1 < numeroD1 && numeroD1 < numeroA1 && numeroA1 < numeroC1)
											{
												printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB1, numeroD1, numeroA1, numeroC1);
											}
												else if(numeroB1 < numeroD1 && numeroD1 < numeroC1 && numeroC1 < numeroA1)
												{
													printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB1, numeroD1, numeroC1, numeroA1);
												}
													else if(numeroC1 < numeroA1 && numeroA1 < numeroB1 && numeroB1 < numeroD1)
													{
														printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC1, numeroA1, numeroB1, numeroD1);
													}
														else if(numeroC1 < numeroA1 && numeroA1 < numeroD1 && numeroD1 < numeroB1)
														{
															printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC1, numeroA1, numeroD1, numeroB1);
														}
															else if(numeroC1 < numeroB1 && numeroB1 < numeroA1 && numeroA1 < numeroD1)
															{
																printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC1, numeroB1, numeroA1, numeroD1);
															}
																else if(numeroC1 < numeroB1 && numeroB1 < numeroD1 && numeroD1 < numeroA1)
																{
																	printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC1, numeroB1, numeroD1, numeroA1);
																}
																	else if(numeroC1 < numeroD1 && numeroD1 < numeroA1 && numeroA1 < numeroB1)
																	{
																		printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC1, numeroD1, numeroA1, numeroB1);
																	}
																		else if(numeroC1 < numeroD1 && numeroD1 < numeroB1 && numeroB1 < numeroA1)
																		{
																			printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC1, numeroD1, numeroB1, numeroA1);
																		}
																			else if(numeroD1 < numeroA1 && numeroA1 < numeroB1 && numeroB1 < numeroC1)
																			{
																				printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD1, numeroA1, numeroB1, numeroC1);
																			}
																				else if(numeroD1 < numeroA1 && numeroA1 < numeroC1 && numeroC1 < numeroB1)
																				{
																					printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD1, numeroA1, numeroC1, numeroB1);
																				}
																					else if(numeroD1 < numeroB1 && numeroB1 < numeroA1 && numeroA1 < numeroC1)
																					{
																						printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD1, numeroB1, numeroA1, numeroC1);
																					}
																						else if(numeroD1 < numeroB1 && numeroB1 < numeroC1 && numeroC1 < numeroA1)
																						{
																							printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD1, numeroB1, numeroC1, numeroA1);
																						}
																							else if(numeroD1 < numeroC1 && numeroC1 < numeroA1 && numeroA1 < numeroB1)
																							{
																								printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD1, numeroC1, numeroA1, numeroB1);
																							}
																								else if(numeroD1 < numeroC1 && numeroC1 < numeroB1 && numeroB1 < numeroA1)
																								{
																									printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD1, numeroC1, numeroB1, numeroA1);
																								}
																								
	printf("\n****************************************************************************");																							
																	
	printf("\nVocê irá inserir os valores correspondentes ao grupo 02!");
	printf("\nInsira o primeiro valor:");
	scanf("%f",&numeroA2);
	printf("Insira o segundo valor:");
	scanf("%f",&numeroB2);
	printf("Insira o terceiro valor:");
	scanf("%f",&numeroC2);
	printf("Insira o quarto valor:");
	scanf("%f",&numeroD2);
	printf("A ordem de inserção dos valores deste grupo foi: %.2f; %.2f; %.2f; %.2f.", numeroA2, numeroB2, numeroC2, numeroD2);
	
	if(numeroA2 > numeroB2 && numeroB2 > numeroC2 && numeroC2 > numeroD2)
	{
		printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA2, numeroB2, numeroC2, numeroD2);
	}
		else if(numeroA2 > numeroB2 && numeroB2 > numeroD2 && numeroD2 > numeroC2)
		{
			printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA2, numeroB2, numeroD2, numeroC2);
		}
			else if(numeroA2 > numeroC2 && numeroC2 > numeroB2 && numeroB2 > numeroD2)
			{
				printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA2, numeroC2, numeroB2, numeroD2);
			}
				else if(numeroA2 > numeroC2 && numeroC2 > numeroD2 && numeroD2 > numeroB2)
				{
					printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA2, numeroC2, numeroD2, numeroB2);
				}
					else if(numeroA2 > numeroD2 && numeroD2 > numeroB2 && numeroB2 > numeroC2)
					{
						printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA2, numeroD2, numeroB2, numeroC2);
					}
						else if(numeroA2 > numeroD2 && numeroD2 > numeroC2 && numeroC2 > numeroB2)
						{
							printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA2, numeroD2, numeroC2, numeroB2);
						}
							else if(numeroB2 > numeroA2 && numeroA2 > numeroC2 && numeroC2 > numeroD2)
							{
								printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB2, numeroA2, numeroC2, numeroD2);
							}
								else if(numeroB2 > numeroA2 && numeroA2 > numeroD2 && numeroD2 > numeroC2)
								{
									printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB2, numeroA2, numeroD2, numeroC2);
								}
									else if(numeroB2 > numeroC2 && numeroC2 > numeroA2 && numeroA2 > numeroD2)
									{
										printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB2, numeroC2, numeroA2, numeroD2);
									}
										else if(numeroB2 > numeroC2 && numeroC2 > numeroD2 && numeroD2 > numeroA2)
										{
											printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB2, numeroC2, numeroD2, numeroA2);
										}
											else if(numeroB2 > numeroD2 && numeroD2 > numeroA2 && numeroA2 > numeroC2)
											{
												printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB2, numeroD2, numeroA2, numeroC2);
											}
												else if(numeroB2 > numeroD2 && numeroD2 > numeroC2 && numeroC2 > numeroA2)
												{
													printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB2, numeroD2, numeroC2, numeroA2);
												}
													else if(numeroC2 > numeroA2 && numeroA2 > numeroB2 && numeroB2 > numeroD2)
													{
														printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC2, numeroA2, numeroB2, numeroD2);
													}
														else if(numeroC2 > numeroA2 && numeroA2 > numeroD2 && numeroD2 > numeroB2)
														{
															printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC2, numeroA2, numeroD2, numeroB2);
														}
															else if(numeroC2 > numeroB2 && numeroB2 > numeroA2 && numeroA2 > numeroD2)
															{
																printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC2, numeroB2, numeroA2, numeroD2);
															}
																else if(numeroC2 > numeroB2 && numeroB2 > numeroD2 && numeroD2 > numeroA2)
																{
																	printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC2, numeroB2, numeroD2, numeroA2);
																}
																	else if(numeroC2 > numeroD2 && numeroD2 > numeroA2 && numeroA2 > numeroB2)
																	{
																		printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC2, numeroD2, numeroA2, numeroB2);
																	}
																		else if(numeroC2 > numeroD2 && numeroD2 > numeroB2 && numeroB2 > numeroA2)
																		{
																			printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC2, numeroD2, numeroB2, numeroA2);
																		}
																			else if(numeroD2 > numeroA2 && numeroA2 > numeroB2 && numeroB2 > numeroC2)
																			{
																				printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD2, numeroA2, numeroB2, numeroC2);
																			}
																				else if(numeroD2 > numeroA2 && numeroA2 > numeroC2 && numeroC2 > numeroB2)
																				{
																					printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD2, numeroA2, numeroC2, numeroB2);
																				}
																					else if(numeroD2 > numeroB2 && numeroB2 > numeroA2 && numeroA2 > numeroC2)
																					{
																						printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD2, numeroB2, numeroA2, numeroC2);
																					}
																						else if(numeroD2 > numeroB2 && numeroB2 > numeroC2 && numeroC2 > numeroA2)
																						{
																							printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD2, numeroB2, numeroC2, numeroA2);
																						}
																							else if(numeroD2 > numeroC2 && numeroC2 > numeroA2 && numeroA2 > numeroB2)
																							{
																								printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD2, numeroC2, numeroA2, numeroB2);
																							}
																								else if(numeroD2 > numeroC2 && numeroC2 > numeroB2 && numeroB2 > numeroA2)
																								{
																									printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD2, numeroC2, numeroB2, numeroA2);
																								}

	if(numeroA2 < numeroB2 && numeroB2 < numeroC2 && numeroC2 < numeroD2)
	{
		printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA2, numeroB2, numeroC2, numeroD2);
	}
		else if(numeroA2 < numeroB2 && numeroB2 < numeroD2 && numeroD2 < numeroC2)
		{
			printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA2, numeroB2, numeroD2, numeroC2);
		}
			else if(numeroA2 < numeroC2 && numeroC2 < numeroB2 && numeroB2 < numeroD2)
			{
				printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA2, numeroC2, numeroB2, numeroD2);
			}
				else if(numeroA2 < numeroC2 && numeroC2 < numeroD2 && numeroD2 < numeroB2)
				{
					printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA2, numeroC2, numeroD2, numeroB2);
				}
					else if(numeroA2 < numeroD2 && numeroD2 < numeroB2 && numeroB2 < numeroC2)
					{
						printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA2, numeroD2, numeroB2, numeroC2);
					}
						else if(numeroA2 < numeroD2 && numeroD2 < numeroC2 && numeroC2 < numeroB2)
						{
							printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA2, numeroD2, numeroC2, numeroB2);
						}
							else if(numeroB2 < numeroA2 && numeroA2 < numeroC2 && numeroC2 < numeroD2)
							{
								printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB2, numeroA2, numeroC2, numeroD2);
							}
								else if(numeroB2 < numeroA2 && numeroA2 < numeroD2 && numeroD2 < numeroC2)
								{
									printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB2, numeroA2, numeroD2, numeroC2);
								}
									else if(numeroB2 < numeroC2 && numeroC2 < numeroA2 && numeroA2 < numeroD2)
									{
										printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB2, numeroC2, numeroA2, numeroD2);
									}
										else if(numeroB2 < numeroC2 && numeroC2 < numeroD2 && numeroD2 < numeroA2)
										{
											printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB2, numeroC2, numeroD2, numeroA2);
										}
											else if(numeroB2 < numeroD2 && numeroD2 < numeroA2 && numeroA2 < numeroC2)
											{
												printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB2, numeroD2, numeroA2, numeroC2);
											}
												else if(numeroB2 < numeroD2 && numeroD2 < numeroC2 && numeroC2 < numeroA2)
												{
													printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB2, numeroD2, numeroC2, numeroA2);
												}
													else if(numeroC2 < numeroA2 && numeroA2 < numeroB2 && numeroB2 < numeroD2)
													{
														printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC2, numeroA2, numeroB2, numeroD2);
													}
														else if(numeroC2 < numeroA2 && numeroA2 < numeroD2 && numeroD2 < numeroB2)
														{
															printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC2, numeroA2, numeroD2, numeroB2);
														}
															else if(numeroC2 < numeroB2 && numeroB2 < numeroA2 && numeroA2 < numeroD2)
															{
																printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC2, numeroB2, numeroA2, numeroD2);
															}
																else if(numeroC2 < numeroB2 && numeroB2 < numeroD2 && numeroD2 < numeroA2)
																{
																	printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC2, numeroB2, numeroD2, numeroA2);
																}
																	else if(numeroC2 < numeroD2 && numeroD2 < numeroA2 && numeroA2 < numeroB2)
																	{
																		printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC2, numeroD2, numeroA2, numeroB2);
																	}
																		else if(numeroC2 < numeroD2 && numeroD2 < numeroB2 && numeroB2 < numeroA2)
																		{
																			printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC2, numeroD2, numeroB2, numeroA2);
																		}
																			else if(numeroD2 < numeroA2 && numeroA2 < numeroB2 && numeroB2 < numeroC2)
																			{
																				printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD2, numeroA2, numeroB2, numeroC2);
																			}
																				else if(numeroD2 < numeroA2 && numeroA2 < numeroC2 && numeroC2 < numeroB2)
																				{
																					printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD2, numeroA2, numeroC2, numeroB2);
																				}
																					else if(numeroD2 < numeroB2 && numeroB2 < numeroA2 && numeroA2 < numeroC2)
																					{
																						printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD2, numeroB2, numeroA2, numeroC2);
																					}
																						else if(numeroD2 < numeroB2 && numeroB2 < numeroC2 && numeroC2 < numeroA2)
																						{
																							printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD2, numeroB2, numeroC2, numeroA2);
																						}
																							else if(numeroD2 < numeroC2 && numeroC2 < numeroA2 && numeroA2 < numeroB2)
																							{
																								printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD2, numeroC2, numeroA2, numeroB2);
																							}
																								else if(numeroD2 < numeroC2 && numeroC2 < numeroB2 && numeroB2 < numeroA2)
																								{
																									printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD2, numeroC2, numeroB2, numeroA2);
																								}
																								
	printf("\n****************************************************************************");																							
																	
	printf("\nVocê irá inserir os valores correspondentes ao grupo 03!");
	printf("\nInsira o primeiro valor:");
	scanf("%f",&numeroA3);
	printf("Insira o segundo valor:");
	scanf("%f",&numeroB3);
	printf("Insira o terceiro valor:");
	scanf("%f",&numeroC3);
	printf("Insira o quarto valor:");
	scanf("%f",&numeroD3);
	printf("A ordem de inserção dos valores deste grupo foi: %.2f; %.2f; %.2f; %.2f.", numeroA3, numeroB3, numeroC3, numeroD3);
	
	if(numeroA3 > numeroB3 && numeroB3 > numeroC3 && numeroC3 > numeroD3)
	{
		printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA3, numeroB3, numeroC3, numeroD3);
	}
		else if(numeroA3 > numeroB3 && numeroB3 > numeroD3 && numeroD3 > numeroC3)
		{
			printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA3, numeroB3, numeroD3, numeroC3);
		}
			else if(numeroA3 > numeroC3 && numeroC3 > numeroB3 && numeroB3 > numeroD3)
			{
				printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA3, numeroC3, numeroB3, numeroD3);
			}
				else if(numeroA3 > numeroC3 && numeroC3 > numeroD3 && numeroD3 > numeroB3)
				{
					printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA3, numeroC3, numeroD3, numeroB3);
				}
					else if(numeroA3 > numeroD3 && numeroD3 > numeroB3 && numeroB3 > numeroC3)
					{
						printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA3, numeroD3, numeroB3, numeroC3);
					}
						else if(numeroA3 > numeroD3 && numeroD3 > numeroC3 && numeroC3 > numeroB3)
						{
							printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA3, numeroD3, numeroC3, numeroB3);
						}
							else if(numeroB3 > numeroA3 && numeroA3 > numeroC3 && numeroC3 > numeroD3)
							{
								printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB3, numeroA3, numeroC3, numeroD3);
							}
								else if(numeroB3 > numeroA3 && numeroA3 > numeroD3 && numeroD3 > numeroC3)
								{
									printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB3, numeroA3, numeroD3, numeroC3);
								}
									else if(numeroB3 > numeroC3 && numeroC3 > numeroA3 && numeroA3 > numeroD3)
									{
										printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB3, numeroC3, numeroA3, numeroD3);
									}
										else if(numeroB3 > numeroC3 && numeroC3 > numeroD3 && numeroD3 > numeroA3)
										{
											printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB3, numeroC3, numeroD3, numeroA3);
										}
											else if(numeroB3 > numeroD3 && numeroD3 > numeroA3 && numeroA3 > numeroC3)
											{
												printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB3, numeroD3, numeroA3, numeroC3);
											}
												else if(numeroB3 > numeroD3 && numeroD3 > numeroC3 && numeroC3 > numeroA3)
												{
													printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB3, numeroD3, numeroC3, numeroA3);
												}
													else if(numeroC3 > numeroA3 && numeroA3 > numeroB3 && numeroB3 > numeroD3)
													{
														printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC3, numeroA3, numeroB3, numeroD3);
													}
														else if(numeroC3 > numeroA3 && numeroA3 > numeroD3 && numeroD3 > numeroB3)
														{
															printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC3, numeroA3, numeroD3, numeroB3);
														}
															else if(numeroC3 > numeroB3 && numeroB3 > numeroA3 && numeroA3 > numeroD3)
															{
																printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC3, numeroB3, numeroA3, numeroD3);
															}
																else if(numeroC3 > numeroB3 && numeroB3 > numeroD3 && numeroD3 > numeroA3)
																{
																	printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC3, numeroB3, numeroD3, numeroA3);
																}
																	else if(numeroC3 > numeroD3 && numeroD3 > numeroA3 && numeroA3 > numeroB3)
																	{
																		printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC3, numeroD3, numeroA3, numeroB3);
																	}
																		else if(numeroC3 > numeroD3 && numeroD3 > numeroB3 && numeroB3 > numeroA3)
																		{
																			printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC3, numeroD3, numeroB3, numeroA3);
																		}
																			else if(numeroD3 > numeroA3 && numeroA3 > numeroB3 && numeroB3 > numeroC3)
																			{
																				printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD3, numeroA3, numeroB3, numeroC3);
																			}
																				else if(numeroD3 > numeroA3 && numeroA3 > numeroC3 && numeroC3 > numeroB3)
																				{
																					printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD3, numeroA3, numeroC3, numeroB3);
																				}
																					else if(numeroD3 > numeroB3 && numeroB3 > numeroA3 && numeroA3 > numeroC3)
																					{
																						printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD3, numeroB3, numeroA3, numeroC3);
																					}
																						else if(numeroD3 > numeroB3 && numeroB3 > numeroC3 && numeroC3 > numeroA3)
																						{
																							printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD3, numeroB3, numeroC3, numeroA3);
																						}
																							else if(numeroD3 > numeroC3 && numeroC3 > numeroA3 && numeroA3 > numeroB3)
																							{
																								printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD3, numeroC3, numeroA3, numeroB3);
																							}
																								else if(numeroD3 > numeroC3 && numeroC3 > numeroB3 && numeroB3 > numeroA3)
																								{
																									printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD3, numeroC3, numeroB3, numeroA3);
																								}

	if(numeroA3 < numeroB3 && numeroB3 < numeroC3 && numeroC3 < numeroD3)
	{
		printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA3, numeroB3, numeroC3, numeroD3);
	}
		else if(numeroA3 < numeroB3 && numeroB3 < numeroD3 && numeroD3 < numeroC3)
		{
			printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA3, numeroB3, numeroD3, numeroC3);
		}
			else if(numeroA3 < numeroC3 && numeroC3 < numeroB3 && numeroB3 < numeroD3)
			{
				printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA3, numeroC3, numeroB3, numeroD3);
			}
				else if(numeroA3 < numeroC3 && numeroC3 < numeroD3 && numeroD3 < numeroB3)
				{
					printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA3, numeroC3, numeroD3, numeroB3);
				}
					else if(numeroA3 < numeroD3 && numeroD3 < numeroB3 && numeroB3 < numeroC3)
					{
						printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA3, numeroD3, numeroB3, numeroC3);
					}
						else if(numeroA3 < numeroD3 && numeroD3 < numeroC3 && numeroC3 < numeroB3)
						{
							printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA3, numeroD3, numeroC3, numeroB3);
						}
							else if(numeroB3 < numeroA3 && numeroA3 < numeroC3 && numeroC3 < numeroD3)
							{
								printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB3, numeroA3, numeroC3, numeroD3);
							}
								else if(numeroB3 < numeroA3 && numeroA3 < numeroD3 && numeroD3 < numeroC3)
								{
									printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB3, numeroA3, numeroD3, numeroC3);
								}
									else if(numeroB3 < numeroC3 && numeroC3 < numeroA3 && numeroA3 < numeroD3)
									{
										printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB3, numeroC3, numeroA3, numeroD3);
									}
										else if(numeroB3 < numeroC3 && numeroC3 < numeroD3 && numeroD3 < numeroA3)
										{
											printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB3, numeroC3, numeroD3, numeroA3);
										}
											else if(numeroB3 < numeroD3 && numeroD3 < numeroA3 && numeroA3 < numeroC3)
											{
												printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB3, numeroD3, numeroA3, numeroC3);
											}
												else if(numeroB3 < numeroD3 && numeroD3 < numeroC3 && numeroC3 < numeroA3)
												{
													printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB3, numeroD3, numeroC3, numeroA3);
												}
													else if(numeroC3 < numeroA3 && numeroA3 < numeroB3 && numeroB3 < numeroD3)
													{
														printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC3, numeroA3, numeroB3, numeroD3);
													}
														else if(numeroC3 < numeroA3 && numeroA3 < numeroD3 && numeroD3 < numeroB3)
														{
															printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC3, numeroA3, numeroD3, numeroB3);
														}
															else if(numeroC3 < numeroB3 && numeroB3 < numeroA3 && numeroA3 < numeroD3)
															{
																printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC3, numeroB3, numeroA3, numeroD3);
															}
																else if(numeroC3 < numeroB3 && numeroB3 < numeroD3 && numeroD3 < numeroA3)
																{
																	printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC3, numeroB3, numeroD3, numeroA3);
																}
																	else if(numeroC3 < numeroD3 && numeroD3 < numeroA3 && numeroA3 < numeroB3)
																	{
																		printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC3, numeroD3, numeroA3, numeroB3);
																	}
																		else if(numeroC3 < numeroD3 && numeroD3 < numeroB3 && numeroB3 < numeroA3)
																		{
																			printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC3, numeroD3, numeroB3, numeroA3);
																		}
																			else if(numeroD3 < numeroA3 && numeroA3 < numeroB3 && numeroB3 < numeroC3)
																			{
																				printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD3, numeroA3, numeroB3, numeroC3);
																			}
																				else if(numeroD3 < numeroA3 && numeroA3 < numeroC3 && numeroC3 < numeroB3)
																				{
																					printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD3, numeroA3, numeroC3, numeroB3);
																				}
																					else if(numeroD3 < numeroB3 && numeroB3 < numeroA3 && numeroA3 < numeroC3)
																					{
																						printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD3, numeroB3, numeroA3, numeroC3);
																					}
																						else if(numeroD3 < numeroB3 && numeroB3 < numeroC3 && numeroC3 < numeroA3)
																						{
																							printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD3, numeroB3, numeroC3, numeroA3);
																						}
																							else if(numeroD3 < numeroC3 && numeroC3 < numeroA3 && numeroA3 < numeroB3)
																							{
																								printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD3, numeroC3, numeroA3, numeroB3);
																							}
																								else if(numeroD3 < numeroC3 && numeroC3 < numeroB3 && numeroB3 < numeroA3)
																								{
																									printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD3, numeroC3, numeroB3, numeroA3);
																								}
																								
	printf("\n****************************************************************************");																							
																	
	printf("\nVocê irá inserir os valores correspondentes ao grupo 04!");
	printf("\nInsira o primeiro valor:");
	scanf("%f",&numeroA4);
	printf("Insira o segundo valor:");
	scanf("%f",&numeroB4);
	printf("Insira o terceiro valor:");
	scanf("%f",&numeroC4);
	printf("Insira o quarto valor:");
	scanf("%f",&numeroD4);
	printf("A ordem de inserção dos valores deste grupo foi: %.2f; %.2f; %.2f; %.2f.", numeroA4, numeroB4, numeroC4, numeroD4);																							
																								
	if(numeroA4 > numeroB4 && numeroB4 > numeroC4 && numeroC4 > numeroD4)
	{
		printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA4, numeroB4, numeroC4, numeroD4);
	}
		else if(numeroA4 > numeroB4 && numeroB4 > numeroD4 && numeroD4 > numeroC4)
		{
			printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA4, numeroB4, numeroD4, numeroC4);
		}
			else if(numeroA4 > numeroC4 && numeroC4 > numeroB4 && numeroB4 > numeroD4)
			{
				printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA4, numeroC4, numeroB4, numeroD4);
			}
				else if(numeroA4 > numeroC4 && numeroC4 > numeroD4 && numeroD4 > numeroB4)
				{
					printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA4, numeroC4, numeroD4, numeroB4);
				}
					else if(numeroA4 > numeroD4 && numeroD4 > numeroB4 && numeroB4 > numeroC4)
					{
						printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA4, numeroD4, numeroB4, numeroC4);
					}
						else if(numeroA4 > numeroD4 && numeroD4 > numeroC4 && numeroC4 > numeroB4)
						{
							printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA4, numeroD4, numeroC4, numeroB4);
						}
							else if(numeroB4 > numeroA4 && numeroA4 > numeroC4 && numeroC4 > numeroD4)
							{
								printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB4, numeroA4, numeroC4, numeroD4);
							}
								else if(numeroB4 > numeroA4 && numeroA4 > numeroD4 && numeroD4 > numeroC4)
								{
									printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB4, numeroA4, numeroD4, numeroC4);
								}
									else if(numeroB4 > numeroC4 && numeroC4 > numeroA4 && numeroA4 > numeroD4)
									{
										printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB4, numeroC4, numeroA4, numeroD4);
									}
										else if(numeroB4 > numeroC4 && numeroC4 > numeroD4 && numeroD4 > numeroA4)
										{
											printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB4, numeroC4, numeroD4, numeroA4);
										}
											else if(numeroB4 > numeroD4 && numeroD4 > numeroA4 && numeroA4 > numeroC4)
											{
												printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB4, numeroD4, numeroA4, numeroC4);
											}
												else if(numeroB4 > numeroD4 && numeroD4 > numeroC4 && numeroC4 > numeroA4)
												{
													printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB4, numeroD4, numeroC4, numeroA4);
												}
													else if(numeroC4 > numeroA4 && numeroA4 > numeroB4 && numeroB4 > numeroD4)
													{
														printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC4, numeroA4, numeroB4, numeroD4);
													}
														else if(numeroC4 > numeroA4 && numeroA4 > numeroD4 && numeroD4 > numeroB4)
														{
															printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC4, numeroA4, numeroD4, numeroB4);
														}
															else if(numeroC4 > numeroB4 && numeroB4 > numeroA4 && numeroA4 > numeroD4)
															{
																printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC4, numeroB4, numeroA4, numeroD4);
															}
																else if(numeroC4 > numeroB4 && numeroB4 > numeroD4 && numeroD4 > numeroA4)
																{
																	printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC4, numeroB4, numeroD4, numeroA4);
																}
																	else if(numeroC4 > numeroD4 && numeroD4 > numeroA4 && numeroA4 > numeroB4)
																	{
																		printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC4, numeroD4, numeroA4, numeroB4);
																	}
																		else if(numeroC4 > numeroD4 && numeroD4 > numeroB4 && numeroB4 > numeroA4)
																		{
																			printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC4, numeroD4, numeroB4, numeroA4);
																		}
																			else if(numeroD4 > numeroA4 && numeroA4 > numeroB4 && numeroB4 > numeroC4)
																			{
																				printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD4, numeroA4, numeroB4, numeroC4);
																			}
																				else if(numeroD4 > numeroA4 && numeroA4 > numeroC4 && numeroC4 > numeroB4)
																				{
																					printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD4, numeroA4, numeroC4, numeroB4);
																				}
																					else if(numeroD4 > numeroB4 && numeroB4 > numeroA4 && numeroA4 > numeroC4)
																					{
																						printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD4, numeroB4, numeroA4, numeroC4);
																					}
																						else if(numeroD4 > numeroB4 && numeroB4 > numeroC4 && numeroC4 > numeroA4)
																						{
																							printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD4, numeroB4, numeroC4, numeroA4);
																						}
																							else if(numeroD4 > numeroC4 && numeroC4 > numeroA4 && numeroA4 > numeroB4)
																							{
																								printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD4, numeroC4, numeroA4, numeroB4);
																							}
																								else if(numeroD4 > numeroC4 && numeroC4 > numeroB4 && numeroB4 > numeroA4)
																								{
																									printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD4, numeroC4, numeroB4, numeroA4);
																								}

	if(numeroA4 < numeroB4 && numeroB4 < numeroC4 && numeroC4 < numeroD4)
	{
		printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA4, numeroB4, numeroC4, numeroD4);
	}
		else if(numeroA4 < numeroB4 && numeroB4 < numeroD4 && numeroD4 < numeroC4)
		{
			printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA4, numeroB4, numeroD4, numeroC4);
		}
			else if(numeroA4 < numeroC4 && numeroC4 < numeroB4 && numeroB4 < numeroD4)
			{
				printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA4, numeroC4, numeroB4, numeroD4);
			}
				else if(numeroA4 < numeroC4 && numeroC4 < numeroD4 && numeroD4 < numeroB4)
				{
					printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA4, numeroC4, numeroD4, numeroB4);
				}
					else if(numeroA4 < numeroD4 && numeroD4 < numeroB4 && numeroB4 < numeroC4)
					{
						printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA4, numeroD4, numeroB4, numeroC4);
					}
						else if(numeroA4 < numeroD4 && numeroD4 < numeroC4 && numeroC4 < numeroB4)
						{
							printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA4, numeroD4, numeroC4, numeroB4);
						}
							else if(numeroB4 < numeroA4 && numeroA4 < numeroC4 && numeroC4 < numeroD4)
							{
								printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB4, numeroA4, numeroC4, numeroD4);
							}
								else if(numeroB4 < numeroA4 && numeroA4 < numeroD4 && numeroD4 < numeroC4)
								{
									printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB4, numeroA4, numeroD4, numeroC4);
								}
									else if(numeroB4 < numeroC4 && numeroC4 < numeroA4 && numeroA4 < numeroD4)
									{
										printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB4, numeroC4, numeroA4, numeroD4);
									}
										else if(numeroB4 < numeroC4 && numeroC4 < numeroD4 && numeroD4 < numeroA4)
										{
											printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB4, numeroC4, numeroD4, numeroA4);
										}
											else if(numeroB4 < numeroD4 && numeroD4 < numeroA4 && numeroA4 < numeroC4)
											{
												printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB4, numeroD4, numeroA4, numeroC4);
											}
												else if(numeroB4 < numeroD4 && numeroD4 < numeroC4 && numeroC4 < numeroA4)
												{
													printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB4, numeroD4, numeroC4, numeroA4);
												}
													else if(numeroC4 < numeroA4 && numeroA4 < numeroB4 && numeroB4 < numeroD4)
													{
														printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC4, numeroA4, numeroB4, numeroD4);
													}
														else if(numeroC4 < numeroA4 && numeroA4 < numeroD4 && numeroD4 < numeroB4)
														{
															printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC4, numeroA4, numeroD4, numeroB4);
														}
															else if(numeroC4 < numeroB4 && numeroB4 < numeroA4 && numeroA4 < numeroD4)
															{
																printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC4, numeroB4, numeroA4, numeroD4);
															}
																else if(numeroC4 < numeroB4 && numeroB4 < numeroD4 && numeroD4 < numeroA4)
																{
																	printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC4, numeroB4, numeroD4, numeroA4);
																}
																	else if(numeroC4 < numeroD4 && numeroD4 < numeroA4 && numeroA4 < numeroB4)
																	{
																		printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC4, numeroD4, numeroA4, numeroB4);
																	}
																		else if(numeroC4 < numeroD4 && numeroD4 < numeroB4 && numeroB4 < numeroA4)
																		{
																			printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC4, numeroD4, numeroB4, numeroA4);
																		}
																			else if(numeroD4 < numeroA4 && numeroA4 < numeroB4 && numeroB4 < numeroC4)
																			{
																				printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD4, numeroA4, numeroB4, numeroC4);
																			}
																				else if(numeroD4 < numeroA4 && numeroA4 < numeroC4 && numeroC4 < numeroB4)
																				{
																					printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD4, numeroA4, numeroC4, numeroB4);
																				}
																					else if(numeroD4 < numeroB4 && numeroB4 < numeroA4 && numeroA4 < numeroC4)
																					{
																						printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD4, numeroB4, numeroA4, numeroC4);
																					}
																						else if(numeroD4 < numeroB4 && numeroB4 < numeroC4 && numeroC4 < numeroA4)
																						{
																							printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD4, numeroB4, numeroC4, numeroA4);
																						}
																							else if(numeroD4 < numeroC4 && numeroC4 < numeroA4 && numeroA4 < numeroB4)
																							{
																								printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD4, numeroC4, numeroA4, numeroB4);
																							}
																								else if(numeroD4 < numeroC4 && numeroC4 < numeroB4 && numeroB4 < numeroA4)
																								{
																									printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD4, numeroC4, numeroB4, numeroA4);
																								}
																								
	printf("\n****************************************************************************");																							
																	
	printf("\nVocê irá inserir os valores correspondentes ao grupo 05!");
	printf("\nInsira o primeiro valor:");
	scanf("%f",&numeroA5);
	printf("Insira o segundo valor:");
	scanf("%f",&numeroB5);
	printf("Insira o terceiro valor:");
	scanf("%f",&numeroC5);
	printf("Insira o quarto valor:");
	scanf("%f",&numeroD5);
	printf("A ordem de inserção dos valores deste grupo foi: %.2f; %.2f; %.2f; %.2f.", numeroA5, numeroB5, numeroC5, numeroD5);
	
	if(numeroA5 > numeroB5 && numeroB5 > numeroC5 && numeroC5 > numeroD5)
	{
		printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA5, numeroB5, numeroC5, numeroD5);
	}
		else if(numeroA5 > numeroB5 && numeroB5 > numeroD5 && numeroD5 > numeroC5)
		{
			printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA5, numeroB5, numeroD5, numeroC5);
		}
			else if(numeroA5 > numeroC5 && numeroC5 > numeroB5 && numeroB5 > numeroD5)
			{
				printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA5, numeroC5, numeroB5, numeroD5);
			}
				else if(numeroA5 > numeroC5 && numeroC5 > numeroD5 && numeroD5 > numeroB5)
				{
					printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA5, numeroC5, numeroD5, numeroB5);
				}
					else if(numeroA5 > numeroD5 && numeroD5 > numeroB5 && numeroB5 > numeroC5)
					{
						printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA5, numeroD5, numeroB5, numeroC5);
					}
						else if(numeroA5 > numeroD5 && numeroD5 > numeroC5 && numeroC5 > numeroB5)
						{
							printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA5, numeroD5, numeroC5, numeroB5);
						}
							else if(numeroB5 > numeroA5 && numeroA5 > numeroC5 && numeroC5 > numeroD5)
							{
								printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB5, numeroA5, numeroC5, numeroD5);
							}
								else if(numeroB5 > numeroA5 && numeroA5 > numeroD5 && numeroD5 > numeroC5)
								{
									printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB5, numeroA5, numeroD5, numeroC5);
								}
									else if(numeroB5 > numeroC5 && numeroC5 > numeroA5 && numeroA5 > numeroD5)
									{
										printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB5, numeroC5, numeroA5, numeroD5);
									}
										else if(numeroB5 > numeroC5 && numeroC5 > numeroD5 && numeroD5 > numeroA5)
										{
											printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB5, numeroC5, numeroD5, numeroA5);
										}
											else if(numeroB5 > numeroD5 && numeroD5 > numeroA5 && numeroA5 > numeroC5)
											{
												printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB5, numeroD5, numeroA5, numeroC5);
											}
												else if(numeroB5 > numeroD5 && numeroD5 > numeroC5 && numeroC5 > numeroA5)
												{
													printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB5, numeroD5, numeroC5, numeroA5);
												}
													else if(numeroC5 > numeroA5 && numeroA5 > numeroB5 && numeroB5 > numeroD5)
													{
														printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC5, numeroA5, numeroB5, numeroD5);
													}
														else if(numeroC5 > numeroA5 && numeroA5 > numeroD5 && numeroD5 > numeroB5)
														{
															printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC5, numeroA5, numeroD5, numeroB5);
														}
															else if(numeroC5 > numeroB5 && numeroB5 > numeroA5 && numeroA5 > numeroD5)
															{
																printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC5, numeroB5, numeroA5, numeroD5);
															}
																else if(numeroC5 > numeroB5 && numeroB5 > numeroD5 && numeroD5 > numeroA5)
																{
																	printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC5, numeroB5, numeroD5, numeroA5);
																}
																	else if(numeroC5 > numeroD5 && numeroD5 > numeroA5 && numeroA5 > numeroB5)
																	{
																		printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC5, numeroD5, numeroA5, numeroB5);
																	}
																		else if(numeroC5 > numeroD5 && numeroD5 > numeroB5 && numeroB5 > numeroA5)
																		{
																			printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC5, numeroD5, numeroB5, numeroA5);
																		}
																			else if(numeroD5 > numeroA5 && numeroA5 > numeroB5 && numeroB5 > numeroC5)
																			{
																				printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD5, numeroA5, numeroB5, numeroC5);
																			}
																				else if(numeroD5 > numeroA5 && numeroA5 > numeroC5 && numeroC5 > numeroB5)
																				{
																					printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD5, numeroA5, numeroC5, numeroB5);
																				}
																					else if(numeroD5 > numeroB5 && numeroB5 > numeroA5 && numeroA5 > numeroC5)
																					{
																						printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD5, numeroB5, numeroA5, numeroC5);
																					}
																						else if(numeroD5 > numeroB5 && numeroB5 > numeroC5 && numeroC5 > numeroA5)
																						{
																							printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD5, numeroB5, numeroC5, numeroA5);
																						}
																							else if(numeroD5 > numeroC5 && numeroC5 > numeroA5 && numeroA5 > numeroB5)
																							{
																								printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD5, numeroC5, numeroA5, numeroB5);
																							}
																								else if(numeroD5 > numeroC5 && numeroC5 > numeroB5 && numeroB5 > numeroA5)
																								{
																									printf("\nA ordem decrescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD5, numeroC5, numeroB5, numeroA5);
																								}

	if(numeroA5 < numeroB5 && numeroB5 < numeroC5 && numeroC5 < numeroD5)
	{
		printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA5, numeroB5, numeroC5, numeroD5);
	}
		else if(numeroA5 < numeroB5 && numeroB5 < numeroD5 && numeroD5 < numeroC5)
		{
			printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA5, numeroB5, numeroD5, numeroC5);
		}
			else if(numeroA5 < numeroC5 && numeroC5 < numeroB5 && numeroB5 < numeroD5)
			{
				printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA5, numeroC5, numeroB5, numeroD5);
			}
				else if(numeroA5 < numeroC5 && numeroC5 < numeroD5 && numeroD5 < numeroB5)
				{
					printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA5, numeroC5, numeroD5, numeroB5);
				}
					else if(numeroA5 < numeroD5 && numeroD5 < numeroB5 && numeroB5 < numeroC5)
					{
						printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA5, numeroD5, numeroB5, numeroC5);
					}
						else if(numeroA5 < numeroD5 && numeroD5 < numeroC5 && numeroC5 < numeroB5)
						{
							printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroA5, numeroD5, numeroC5, numeroB5);
						}
							else if(numeroB5 < numeroA5 && numeroA5 < numeroC5 && numeroC5 < numeroD5)
							{
								printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB5, numeroA5, numeroC5, numeroD5);
							}
								else if(numeroB5 < numeroA5 && numeroA5 < numeroD5 && numeroD5 < numeroC5)
								{
									printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB5, numeroA5, numeroD5, numeroC5);
								}
									else if(numeroB5 < numeroC5 && numeroC5 < numeroA5 && numeroA5 < numeroD5)
									{
										printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB5, numeroC5, numeroA5, numeroD5);
									}
										else if(numeroB5 < numeroC5 && numeroC5 < numeroD5 && numeroD5 < numeroA5)
										{
											printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB5, numeroC5, numeroD5, numeroA5);
										}
											else if(numeroB5 < numeroD5 && numeroD5 < numeroA5 && numeroA5 < numeroC5)
											{
												printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB5, numeroD5, numeroA5, numeroC5);
											}
												else if(numeroB5 < numeroD5 && numeroD5 < numeroC5 && numeroC5 < numeroA5)
												{
													printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroB5, numeroD5, numeroC5, numeroA5);
												}
													else if(numeroC5 < numeroA5 && numeroA5 < numeroB5 && numeroB5 < numeroD5)
													{
														printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC5, numeroA5, numeroB5, numeroD5);
													}
														else if(numeroC5 < numeroA5 && numeroA5 < numeroD5 && numeroD5 < numeroB5)
														{
															printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC5, numeroA5, numeroD5, numeroB5);
														}
															else if(numeroC5 < numeroB5 && numeroB5 < numeroA5 && numeroA5 < numeroD5)
															{
																printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC5, numeroB5, numeroA5, numeroD5);
															}
																else if(numeroC5 < numeroB5 && numeroB5 < numeroD5 && numeroD5 < numeroA5)
																{
																	printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC5, numeroB5, numeroD5, numeroA5);
																}
																	else if(numeroC5 < numeroD5 && numeroD5 < numeroA5 && numeroA5 < numeroB5)
																	{
																		printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC5, numeroD5, numeroA5, numeroB5);
																	}
																		else if(numeroC5 < numeroD5 && numeroD5 < numeroB5 && numeroB5 < numeroA5)
																		{
																			printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroC5, numeroD5, numeroB5, numeroA5);
																		}
																			else if(numeroD5 < numeroA5 && numeroA5 < numeroB5 && numeroB5 < numeroC5)
																			{
																				printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD5, numeroA5, numeroB5, numeroC5);
																			}
																				else if(numeroD5 < numeroA5 && numeroA5 < numeroC5 && numeroC5 < numeroB5)
																				{
																					printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD5, numeroA5, numeroC5, numeroB5);
																				}
																					else if(numeroD5 < numeroB5 && numeroB5 < numeroA5 && numeroA5 < numeroC5)
																					{
																						printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD5, numeroB5, numeroA5, numeroC5);
																					}
																						else if(numeroD5 < numeroB5 && numeroB5 < numeroC5 && numeroC5 < numeroA5)
																						{
																							printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD5, numeroB5, numeroC5, numeroA5);
																						}
																							else if(numeroD5 < numeroC5 && numeroC5 < numeroA5 && numeroA5 < numeroB5)
																							{
																								printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD5, numeroC5, numeroA5, numeroB5);
																							}
																								else if(numeroD5 < numeroC5 && numeroC5 < numeroB5 && numeroB5 < numeroA5)
																								{
																									printf("\nA ordem crescente dos valores inseridos neste grupo é: %.2f; %.2f; %.2f; %.2f.", numeroD5, numeroC5, numeroB5, numeroA5);
																								}	
}
